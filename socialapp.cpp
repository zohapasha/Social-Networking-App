#include "socialapp.h"
#include"shareamemory.h"
#include "ui_socialapp.h"
#include"friendwindow.h"
#include "timeline.h"
#include"homepage.h"
#include"activity.h"
#include <QMessageBox>
#include"viewpage.h"
#include<QLabel>
#include<QHBoxLayout>

socialapp::socialapp(User* currentUser, const QString& email, app* myApp, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::socialapp),
    currentUser(currentUser),
    email(email),
    noOfFriends(0),
    noOfPosts(0),
    myApp(myApp)
{
    ui->setupUi(this);
    ui->name->setText(currentUser->getName());
    QString name2=currentUser->getName();
    QString email1 = name2 + QString::number(name2.length()) + "@gmail.com";
    ui->email->setText(email1);
}

socialapp::~socialapp()
{
    delete ui;
}

void socialapp::updateCounts(int friends, int posts)
{
    noOfFriends = friends;
    noOfPosts = posts;
    ui->followerCount->setText(QString::number(noOfFriends));
    ui->postCount->setText(QString::number(noOfPosts));
    ui->likedpagescount->setText(QString::number(currentUser->getnoOflikedPages()));
}

void socialapp::on_next_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void socialapp::on_prev_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void socialapp::on_learnmore_clicked()
{
    QMessageBox::information(this, "Logged into Trendify", "You are currently logged into Trendify. Trendify is a social media platform that helps you stay updated on the latest trends and connect with like-minded individuals.");
}

void socialapp::on_pushButton_5_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void socialapp::on_pushButton_6_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void socialapp::on_add_girl1_clicked()
{
    User* friend1 = new User(11, "Ayesha");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend1) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Ayesha.");
        delete friend1;
    } else {

        currentUser->addFriend(friend1);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());

    }
}


void socialapp::on_add_man1_clicked()
{
    User* friend2 = new User(10, "Ayan");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend2) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Ayan.");
        delete friend2;
    } else {

        currentUser->addFriend(friend2);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }

}


void socialapp::on_viewfriendlist_clicked()
{
    friendwindow* friendWindow = new friendwindow(this, currentUser);
    friendWindow->show();
}


void socialapp::on_add_girl2_clicked()
{
    User* friend3 = new User(188, "Pooja");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend3) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Pooja.");
        delete friend3;
    } else {

        currentUser->addFriend(friend3);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());

    }
}



void socialapp::on_add_man2_clicked()
{
    User* friend4 = new User(27, "Messi");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend4) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Messi.");
        delete friend4;
    } else {

        currentUser->addFriend(friend4);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());

    }
}


void socialapp::on_add_girl3_clicked()
{
    User* friend5 = new User(17, "Maha");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend5) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Maha.");
        delete friend5;
    } else {

        currentUser->addFriend(friend5);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());

    }
}


void socialapp::on_add_man3_clicked()
{
    User* friend6 = new User(5, "Ronaldo");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend6) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Ronaldo.");
        delete friend6;
    } else {

        currentUser->addFriend(friend6);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }
}


void socialapp::on_add_girl4_clicked()
{
    User* friend7 = new User(34, "Sana");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend7) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Sana.");
        delete friend7;
    } else {

        currentUser->addFriend(friend7);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }
}


void socialapp::on_add_man4_clicked()
{
    User* friend8 = new User(2, "Ali");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend8) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Ali.");
        delete friend8;
    } else {

        currentUser->addFriend(friend8);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }
}



void socialapp::on_add_man5_clicked()
{
    User* friend9 = new User(23, "Ammar");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend9) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Ammar.");
        delete friend9;
    } else {

        currentUser->addFriend(friend9);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }
}



void socialapp::on_add_man6_clicked()
{
    User* friend10 = new User(15, "Sammy");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend10) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Sammy.");
        delete friend10;
    } else {

        currentUser->addFriend(friend10);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }
}


void socialapp::on_add_girl5_clicked()
{
    User* friend11 = new User(20, "Fatima");
    bool alreadyFriends = false;

    for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
        if (*currentUser->getFriendlist()[i] == *friend11) {
            alreadyFriends = true;
            break;
        }
    }

    if (alreadyFriends) {
        QMessageBox::information(this, "Friend Request", "You are already friends with Fatima.");
        delete friend11;
    } else {

        currentUser->addFriend(friend11);
        updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    }
}

void socialapp::on_openTimeline_clicked()
{
    timeline *timeLineWindow = new timeline(currentUser, this);
    timeLineWindow->show();
}


void socialapp::on_sharememory_button_clicked()
{
    shareamemory *memory = new shareamemory(currentUser, this);
    memory->show();
}


void socialapp::on_homepageopen_clicked()
{
    homepage *home = new homepage(currentUser,myApp, this);
    home->show();
}
void socialapp::on_AddActivity_clicked()
{
    activity *Activity = new activity(currentUser,myApp, this);
    Activity->show();
}
void socialapp::on_enter_clicked()
{
    int postId = ui->postid->text().toInt();
    Post* foundPost = nullptr;
    Post** allPosts = myApp->getAllPosts();
    for (int i = 0; allPosts[i] != nullptr; i++) {
        if(allPosts[i])
        {
            if (allPosts[i]->getId()==postId) {
                foundPost = allPosts[i];
                break;
            }
        }
    }

    if (foundPost != nullptr) {
        QString postIdText = QString("<span style='font-size: 16px; font-family: Arial; color: #333;'>Post ID: %1</span><br>")
                                 .arg(foundPost->getId());

        QString postDescription = QString("<span style='font-size: 18px; font-family: Times New Roman; color: #555;'>Description: %1</span><br>")
                                      .arg(QString::fromStdString(foundPost->getDescription()));

        QString sharedDateText = QString("<span style='font-size: 12px; font-family: Verdana; color: #999;'>Shared Date: %1-%2-%3 %4:%5:%6</span><br>")
                                     .arg(foundPost->getSharedDate().getYear())
                                     .arg(foundPost->getSharedDate().getMonth())
                                     .arg(foundPost->getSharedDate().getDay())
                                     .arg(foundPost->getSharedDate().getHour(), 2, 10, QLatin1Char('0'))
                                     .arg(foundPost->getSharedDate().getMinute(), 2, 10, QLatin1Char('0'))
                                     .arg(foundPost->getSharedDate().getSecond(), 2, 10, QLatin1Char('0'));

        QString authorText = QString("<span style='font-size: 14px; font-family: Courier; color: #777;'>Author: %1</span>")
                                 .arg(foundPost->getAuthor()->getName());

        QString postInfoText = postIdText + postDescription + sharedDateText + authorText;
        ui->post->setText(postInfoText);
        ui->likes->setText("Likes: " + QString::number(foundPost->getLikeCount()));
        ui->comments->clear();
        Comment** comments = foundPost->getComments();
        for (int i = 0; comments[i] != nullptr; i++) {
            ui->comments->addItem(QString::fromStdString(comments[i]->getText()));
        }
        ui->likedby->clear();
        User** likedByUsers = foundPost->getLikedBy();
        for (int i = 0; likedByUsers[i] != nullptr; i++) {
            ui->likedby->addItem(likedByUsers[i]->getName());
        }
    } else {

        QMessageBox::warning(this, "Post Not Found", "The post with the given ID was not found.");

        // Clear all widgets
        ui->post->clear();
        ui->likes->clear();
        ui->comments->clear();
        ui->likedby->clear();
    }
}

void socialapp::on_enter_2_clicked()
{
    int postId = ui->commentpostid->text().toInt();
    std::string commentText = ui->newComment->text().toStdString();
    Post* foundPost = nullptr;
    Post** allPosts = myApp->getAllPosts();
    for (int i = 0; allPosts[i] != nullptr; i++) {
        if (allPosts[i]->getId() == postId) {
            foundPost = allPosts[i];
            break;
        }
    }

    if (foundPost != nullptr) {
        currentUser->AddComment(foundPost, commentText);
        QMessageBox::information(this, "Comment Added", "Your comment has been added successfully.");
        ui->newComment->clear();
    } else {
        QMessageBox::warning(this, "Post Not Found", "The post with the given ID was not found.");
    }
}


void socialapp::on_viewapage_clicked()
{
    viewpage *viewpagewindow = new viewpage(currentUser,myApp, this);
    viewpagewindow->show();
}

