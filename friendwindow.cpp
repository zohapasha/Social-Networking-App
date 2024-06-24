#include "friendwindow.h"
#include "ui_friendwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QLabel>
#include <QVBoxLayout>
#include "classes.h"

friendwindow::friendwindow(QWidget *parent, User* currentUser) :
    QDialog(parent),
    ui(new Ui::friendwindow),
    currentUser(currentUser),
    friendListLayout(nullptr) // Initialize friendListLayout to nullptr
{
    ui->setupUi(this);

    if (!currentUser) {
        QMessageBox::critical(this, "Error", "Current user is null!");
    } else {
        createFriendListLayout();
        displayFriendList();
    }
}

friendwindow::~friendwindow()
{
    delete ui;
}

void friendwindow::createFriendListLayout() {
    if(!ui->friendListWidget->layout()) {
        friendListLayout = new QVBoxLayout(ui->friendListWidget);
        ui->friendListWidget->setLayout(friendListLayout);
    }
    QLabel* titleLabel = new QLabel("Your Friend List");
    titleLabel->setStyleSheet("font-size: 24px; font-weight: bold; font-style: italic;");
    friendListLayout->addWidget(titleLabel);
}



void friendwindow::displayFriendList() {
    if (currentUser) {
        User** friends = currentUser->getFriendlist();
        if (friendListLayout) {
            QLayoutItem *child;
            while ((child = friendListLayout->takeAt(0)) != nullptr) {
                delete child->widget();
                delete child;
            }
            for (int i = 0; i < currentUser->getnoOfFriends(); i++) {
                QLabel* friendLabel = new QLabel;
                friendLabel->setText(QString("ID: %1 - Name: %2").arg(friends[i]->getId()).arg(friends[i]->getName()));
                friendLabel->setStyleSheet("background-color: #f0f0f0; border-radius: 5px; padding: 5px;");
                friendListLayout->addWidget(friendLabel);
            }
        } else {
            qDebug() << "Friend list layout is null!";
        }
    } else {
        qDebug() << "Current user is null!";
    }
}
