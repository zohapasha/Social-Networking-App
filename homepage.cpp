#include "homepage.h"
#include "ui_homepage.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QComboBox>
#include<QMessageBox>
#include<QDateTime>


homepage::homepage(User* currentUser, app* myApp, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage),
    currentUser(currentUser),
    myApp(myApp)
{
    ui->setupUi(this);
    connect(ui->heart1, SIGNAL(clicked()), this, SIGNAL(heart1Clicked()));
    connect(ui->heart2, SIGNAL(clicked()), this, SIGNAL(heart2Clicked()));
    connect(ui->heart3, SIGNAL(clicked()), this, SIGNAL(heart3Clicked()));
    displayPosts();
}


homepage::~homepage()
{
    delete ui;
}

void homepage::displayPosts() {
    myApp->ReadFriendPosts();
    myApp->ReadPages();
    Page** allPages = myApp->getAllPages();

    for (int i = 0; i < 3; i++) {
        Post** posts = allPages[i]->getPosts();

        for (int j = 0; j < allPages[i]->getNoOfPosts(); ++j) {
            QString postInfo = "<font color='#0B2161'><b>Page Name:</b> " + QString::fromStdString(allPages[i]->getTitle()) + "</font><br>"
                                                                                                                              "<font color='#0B2161'><b>Post " + QString::number(j + 1) + ":</b></font><br>"
                                                          "<font color='#0B2161'><b>Description:</b> " + QString::fromStdString(posts[j]->getDescription()) + "</font><br>"
                                                                                      "<font color='#0B2161'><b>Shared Date:</b> " + QString::number(posts[j]->getSharedDate().getDay()) + "/" +
                               QString::number(posts[j]->getSharedDate().getMonth()) + "/" +
                               QString::number(posts[j]->getSharedDate().getYear()) + "</font><br>"
                                                                                      "<font color='#0B2161'><b>Author:</b> " + posts[j]->getAuthor()->getName() + "</font><br><br>";

            ui->textBrowser->insertHtml(postInfo);
        }
    }
    Post **posts=myApp->getAllPosts();
    if (posts && posts[0] && posts[1] && posts[2]){
        displayPost(ui->labelpost1, ui->likeslabel1, ui->comboBox1,ui->comboBox4, posts[0]);
        displayPost(ui->labelpost2, ui->likeslabel2, ui->comboBox2,ui->comboBox5, posts[1]);
        displayPost(ui->labelpost3, ui->likeslabel3, ui->comboBox3,ui->comboBox6, posts[2]);
    }

}


void homepage::displayPost(QLabel* postLabel, QLabel* likeLabel, QComboBox* comboBox, QComboBox* comboBox2, Post* post) {
    Date sharedDate = post->getSharedDate();
    postLabel->setText(QString("Post ID: %1\nDescription: %2\nShared Date: %3/%4/%5 %6:%7:%8\nAuthor: %9")
                           .arg(post->getId())
                           .arg(QString::fromStdString(post->getDescription()))
                           .arg(sharedDate.getYear())
                           .arg(sharedDate.getMonth())
                           .arg(sharedDate.getDay())
                           .arg(sharedDate.getHour())
                           .arg(sharedDate.getMinute())
                           .arg(sharedDate.getSecond())
                           .arg(post->getAuthor()->getName()));

    likeLabel->setText(QString("%1").arg(post->getLikeCount()));

    comboBox->clear();
    comboBox2->clear();

    Comment** comments = post->getComments();
    int commentCount = post->getCommentCount();
    for (int i = 0; i < commentCount; i++) {
        comboBox->addItem(QString("%1: %2").arg(comments[i]->getAuthor()->getName()).arg(QString::fromStdString(comments[i]->getText())));
    }

    User** likedBy = post->getLikedBy();
    int likedByCount = post->getLikeCount();
    for (int i = 0; i < likedByCount; i++) {
        comboBox2->addItem(QString("Liked By: %1").arg(likedBy[i]->getName()));
    }
}

void homepage::on_next_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void homepage::on_prev_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void homepage::on_heart1_clicked()
{
    Post* post = myApp->getAllPosts()[0];

    if (!currentUser->isAlreadyLiked(post)) {
        currentUser->likePost(post);
    } else {
        QMessageBox::information(this, "Already Liked", "You have already liked this post.");
    }

    displayPost(ui->labelpost1, ui->likeslabel1, ui->comboBox1, ui->comboBox4, post);
}



void homepage::on_heart2_clicked()
{
    Post* post = myApp->getAllPosts()[1];

    if (!currentUser->isAlreadyLiked(post)) {
        currentUser->likePost(post);
    } else {
        QMessageBox::information(this, "Already Liked", "You have already liked this post.");
    }

    displayPost(ui->labelpost2, ui->likeslabel2, ui->comboBox2, ui->comboBox5, post);
}


void homepage::on_heart3_clicked()
{
    Post* post = myApp->getAllPosts()[2];

    if (!currentUser->isAlreadyLiked(post)) {
        currentUser->likePost(post);
    } else {
        QMessageBox::information(this, "Already Liked", "You have already liked this post.");
    }

    displayPost(ui->labelpost3, ui->likeslabel3, ui->comboBox3, ui->comboBox6, post);
}


