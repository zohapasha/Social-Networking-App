/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGroupBox *groupBox;
    QPushButton *signupButton;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditAge;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(786, 547);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 50, 581, 441));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"/* Group Box */\n"
"QGroupBox {\n"
"    background-color: white; /* Light blue background color */\n"
"    border: none;\n"
"border-radius:80px\n"
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
"}"
                        "\n"
"\n"
"/* Hover State Style for Push Button */\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #005f5f, stop:1 #007f7f); /* Darker blue to even darker blue gradient on hover */\n"
"}\n"
"\n"
"/* Pressed State Style for Push Button */\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #007f7f, stop:1 #009f9f); /* Even darker blue to very dark blue gradient when pressed */\n"
"}\n"
""));
        signupButton = new QPushButton(groupBox);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(200, 370, 171, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        signupButton->setFont(font);
        signupButton->setStyleSheet(QString::fromUtf8("/* Push Button */\n"
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
        lineEditUsername = new QLineEdit(groupBox);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(170, 140, 231, 41));
        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(170, 200, 231, 41));
        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(170, 250, 231, 41));
        lineEditAge = new QLineEdit(groupBox);
        lineEditAge->setObjectName("lineEditAge");
        lineEditAge->setGeometry(QRect(170, 310, 231, 41));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 20, 191, 51));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 80, 171, 20));
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-20, 0, 811, 551));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/backdrop.jpg);"));
        label_3->raise();
        groupBox->raise();

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        groupBox->setTitle(QString());
        signupButton->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        lineEditUsername->setText(QString());
        lineEditUsername->setPlaceholderText(QCoreApplication::translate("SignUp", "username", nullptr));
        lineEditEmail->setText(QString());
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("SignUp", "email", nullptr));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("SignUp", "password", nullptr));
        lineEditAge->setText(QString());
        lineEditAge->setPlaceholderText(QCoreApplication::translate("SignUp", "age", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Create Your Account", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
