#include "viewpage.h"
#include "ui_viewpage.h"

viewpage::viewpage(User* currentUser, app* myApp, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewpage)
    , currentUser(currentUser)
    , myApp(myApp)
{
    ui->setupUi(this);
}

viewpage::~viewpage()
{
    delete ui;
}

void viewpage::on_pushButton_clicked()
{
    myApp->ReadPages();
    QString pageIdStr = ui->lineEdit->text();
    int pageId = pageIdStr.toInt();

    Page** allPages = myApp->getAllPages();
    Page* page = nullptr;

    for (int i = 0; i < 20; i++) {
        if (allPages[i]->getId() == pageId) {
            page = allPages[i];
            break;
        }
    }

    if (page) {
        ui->textBrowser->clear();

        QString pageName = QString::fromStdString(page->getTitle());
        QString ownerName = page->getOwner()->getName();
        QString pageInfo = "<h2 style='font-size: 20px;'>Page Name: <font color='#0B2161'>" + pageName + "</font></h2>"
                                                                                                         "<h3 style='font-size: 18px;'>Owner Name: <font color='black'>" + ownerName + "</font></h3><br>";
        ui->textBrowser->append(pageInfo);

        Post** posts = page->getPosts();
        for (int i = 0; i < page->getNoOfPosts(); i++) {
            QString postInfo = "<h4 style='font-size: 16px;'>Post " + QString::number(i + 1) + ":</h4>"
                                                                                               "<b style='font-size: 14px;'>Description:</b> " + QString::fromStdString(posts[i]->getDescription()) + "<br>"
                                                                                      "<b style='font-size: 14px;'>Shared Date:</b> " + QString::number(posts[i]->getSharedDate().getDay()) + "/" +
                               QString::number(posts[i]->getSharedDate().getMonth()) + "/" +
                               QString::number(posts[i]->getSharedDate().getYear()) + "<br>"
                                                                                      "<b style='font-size: 14px;'>Author:</b> " + posts[i]->getAuthor()->getName() + "<br>";

            Comment** comments = posts[i]->getComments();
            postInfo += "<b style='font-size: 14px;'>Comments:</b><ul>";
            for (int j = 0; j < posts[i]->getCommentCount(); ++j) {
                postInfo += "<li style='font-size: 14px;'>" + QString::fromStdString(comments[j]->getText()) + "</li>";
            }
            postInfo += "</ul>";

            User** likedBy = posts[i]->getLikedBy();
            postInfo += "<b style='font-size: 14px;'>Liked By:</b><ul>";
            for (int j = 0; j < posts[i]->getLikeCount(); ++j) {
                postInfo += "<li style='font-size: 14px;'>" + likedBy[j]->getName() + "</li>";
            }
            postInfo += "</ul>";

            postInfo += "<b style='font-size: 14px;'>Like Count:</b> " + QString::number(posts[i]->getLikeCount()) + "<br><br>";

            ui->textBrowser->append(postInfo);
        }
    } else {
        ui->textBrowser->setText("<font color='red'>Page not found!</font>");
    }
}

