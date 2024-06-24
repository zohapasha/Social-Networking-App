#include "timeline.h"
#include "ui_timeline.h"
#include <QMessageBox>
#include <QLabel>
#include <QVBoxLayout>
#include "createpost.h"
#include "classes.h"
#include"mainwindow.h"

timeline::timeline(User* currentUser, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timeline),
    currentUser(currentUser)
{
    ui->setupUi(this);
    ui->UsersTimeline->setText(QString("%1's Timeline").arg(currentUser->getName()));

    if (!currentUser) {
        QMessageBox::critical(this, "Error", "Current user is null!");
    } else {
        displayTimeline();
    }
}

timeline::~timeline()
{
    delete ui;
}

void timeline::displayTimeline() {
    if (currentUser) {
        Post** timeline = currentUser->getTimeLine();
        QVBoxLayout *timelineLayout = new QVBoxLayout();
        ui->scrollAreaWidgetContents->setLayout(timelineLayout);

        for (int i = 0; i < currentUser->gettimeLineCount(); i++) {
            QLabel* postLabel = new QLabel(this); // Set parent to this
            QString sharedDate = QString("%1-%2-%3 %4:%5:%6")
                                     .arg(timeline[i]->getSharedDate().getYear())
                                     .arg(timeline[i]->getSharedDate().getMonth())
                                     .arg(timeline[i]->getSharedDate().getDay())
                                     .arg(timeline[i]->getSharedDate().getHour(), 2, 10, QLatin1Char('0'))
                                     .arg(timeline[i]->getSharedDate().getMinute(), 2, 10, QLatin1Char('0'))
                                     .arg(timeline[i]->getSharedDate().getSecond(), 2, 10, QLatin1Char('0'));

            QString postText = QString("<span style='font-size: 16px; font-family: Arial; color: #333;'>Post ID: %1</span><br>"
                                       "<span style='font-size: 18px; font-family: Times New Roman; color: #555;'>Description: %2</span><br>"
                                       "<span style='font-size: 14px; font-family: Courier; color: #777;'>Author: %3</span><br>"
                                       "<span style='font-size: 12px; font-family: Verdana; color: #999;'>Shared Date: %4</span>")
                                   .arg(timeline[i]->getId())
                                   .arg(QString::fromStdString(timeline[i]->getDescription()))
                                   .arg(timeline[i]->getAuthor()->getName())
                                   .arg(sharedDate);
            postLabel->setText(postText);
            postLabel->setStyleSheet("background-color: #f5f5f5; border-radius: 5px; padding: 10px;");
            postLabel->setWordWrap(true); // Allows text to appear on multiple lines
            timelineLayout->addWidget(postLabel);
        }
    } else {
        qDebug() << "Current user is null!";
    }
}


void timeline::on_pushButton_clicked()
{
    createPost *createPostWindow = new createPost(currentUser, this);
    createPostWindow->show();
}
