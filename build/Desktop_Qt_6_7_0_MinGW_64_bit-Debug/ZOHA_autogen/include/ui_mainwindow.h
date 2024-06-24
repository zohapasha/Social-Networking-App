/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox;
    QLineEdit *passwordLineEdit;
    QLineEdit *usernameLineEdit;
    QPushButton *SignIn;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QPushButton *SignUp;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(866, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, -1, 801, 51));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 539, 1031, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-10, 0, 431, 591));
        label_8->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 50, 451, 491));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"/* Group Box */\n"
"QGroupBox {\n"
"    background-color: white; /* Light blue background color */\n"
"    border: none; \n"
"}\n"
"\n"
"/* Line Edits */\n"
"QLineEdit {\n"
"    border: 2px solid #003366; /* Dark blue border */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"/* Hover Effect for Line Edits */\n"
"QLineEdit:hover {\n"
"    border-color: #005f5f; /* Darker blue on hover */\n"
"}\n"
"\n"
"/* Focus Effect for Line Edits */\n"
"QLineEdit:focus {\n"
"    border-color: #007f7f; /* Even darker blue when focused */\n"
"}\n"
"\n"
"/* Placeholder Text Color */\n"
"QLineEdit::placeholder {\n"
"    color: #003366; /* Dark blue placeholder text */\n"
"}\n"
"\n"
"/* Push Button */\n"
"QPushButton {\n"
"    border-radius: 20px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #003366, stop:1 #005f5f); /* Dark blue to darker blue gradient */\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"}\n"
"\n"
"/* Hover Sta"
                        "te Style for Push Button */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #005f5f, stop:1 #007f7f); /* Darker blue to even darker blue gradient on hover */\n"
"}\n"
"\n"
"/* Pressed State Style for Push Button */\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #007f7f, stop:1 #009f9f); /* Even darker blue to very dark blue gradient when pressed */\n"
"}\n"
""));
        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(70, 230, 271, 51));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(70, 140, 271, 51));
        SignIn = new QPushButton(groupBox);
        SignIn->setObjectName("SignIn");
        SignIn->setGeometry(QRect(130, 320, 151, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        SignIn->setFont(font);
        SignIn->setStyleSheet(QString::fromUtf8("/* Push Button */\n"
"QPushButton {\n"
"    border-radius: 20px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #001F3F, stop:1 #004080); /* Changed gradient colors */\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"}\n"
"\n"
"/* Hover State Style for Push Button */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #004080, stop:1 #001F3F); /* Changed gradient colors */\n"
"}\n"
"\n"
"/* Pressed State Style for Push Button */\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #001F3F, stop:1 #004080); /* Changed gradient colors */\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 171, 51));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 70, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(530, 50, 271, 491));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-image: url(:/backdrop.jpg);\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: white; \n"
"    color: black \n"
"    border: none; \n"
"    border-radius: 20px; \n"
"    padding: 10px 20px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.3); \n"
"}\n"
"\n"
"QLabel {\n"
"    color: white;\n"
"    background: transparent;\n"
"}\n"
""));
        SignUp = new QPushButton(groupBox_2);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(60, 320, 151, 61));
        SignUp->setFont(font);
        SignUp->setStyleSheet(QString::fromUtf8("border-radius: 15px; \n"
"  padding: 10px 20px;\n"
"background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 80, 201, 51));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:transparent;"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 180, 191, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:transparent;"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 210, 191, 21));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:transparent;"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 560, 431, 591));
        label_10->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(410, -1, 481, 51));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(792, 50, 91, 501));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        groupBox->setTitle(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "username", nullptr));
        SignIn->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login To ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Your Account", nullptr));
        groupBox_2->setTitle(QString());
        SignUp->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "New Here?", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Sign Up now and experience ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "a world of oppurtunities", nullptr));
        label_10->setText(QString());
        label_9->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
