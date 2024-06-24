/********************************************************************************
** Form generated from reading UI file 'friendwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDWINDOW_H
#define UI_FRIENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_friendwindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *friendListLayout;
    QScrollArea *friendListWidget;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *friendwindow)
    {
        if (friendwindow->objectName().isEmpty())
            friendwindow->setObjectName("friendwindow");
        friendwindow->resize(448, 567);
        horizontalLayoutWidget = new QWidget(friendwindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 451, 571));
        friendListLayout = new QHBoxLayout(horizontalLayoutWidget);
        friendListLayout->setObjectName("friendListLayout");
        friendListLayout->setContentsMargins(0, 0, 0, 0);
        friendListWidget = new QScrollArea(horizontalLayoutWidget);
        friendListWidget->setObjectName("friendListWidget");
        friendListWidget->setStyleSheet(QString::fromUtf8("  background-color: #0B2161; "));
        friendListWidget->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 447, 567));
        friendListWidget->setWidget(scrollAreaWidgetContents);

        friendListLayout->addWidget(friendListWidget);


        retranslateUi(friendwindow);

        QMetaObject::connectSlotsByName(friendwindow);
    } // setupUi

    void retranslateUi(QDialog *friendwindow)
    {
        friendwindow->setWindowTitle(QCoreApplication::translate("friendwindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class friendwindow: public Ui_friendwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDWINDOW_H
