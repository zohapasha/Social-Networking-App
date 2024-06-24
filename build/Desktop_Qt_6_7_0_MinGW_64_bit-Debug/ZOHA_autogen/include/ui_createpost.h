/********************************************************************************
** Form generated from reading UI file 'createpost.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPOST_H
#define UI_CREATEPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createPost
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *postid;
    QLineEdit *description;
    QLabel *label_3;
    QLineEdit *todaysdate;
    QLabel *label_4;
    QPushButton *createpushButton;
    QGroupBox *groupBox;

    void setupUi(QDialog *createPost)
    {
        if (createPost->objectName().isEmpty())
            createPost->setObjectName("createPost");
        createPost->resize(588, 587);
        createPost->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(createPost);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 401, 61));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: transparent;"));
        label_2 = new QLabel(createPost);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 110, 61, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color:transparent;"));
        postid = new QLineEdit(createPost);
        postid->setObjectName("postid");
        postid->setGeometry(QRect(110, 140, 371, 41));
        postid->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    border: 3px solid white; /* Add a white border */\n"
"background-color:#0B2161;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}\n"
"\n"
"QLineEdit:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.4); /* Light grey color with 40% opacity */\n"
"}\n"
""));
        description = new QLineEdit(createPost);
        description->setObjectName("description");
        description->setGeometry(QRect(110, 230, 371, 141));
        description->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    border: 3px solid white;\n"
"background-color:#0B2161;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}\n"
"\n"
"QLineEdit:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.4); /* Light grey color with 40% opacity */\n"
"}\n"
""));
        label_3 = new QLabel(createPost);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 200, 141, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color:transparent;"));
        todaysdate = new QLineEdit(createPost);
        todaysdate->setObjectName("todaysdate");
        todaysdate->setGeometry(QRect(110, 420, 371, 41));
        todaysdate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    border: 3px solid white;\n"
"background-color:#0B2161;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: rgba(255, 255, 255, 0.2); \n"
"}\n"
"\n"
"QLineEdit:pressed {\n"
"    background-color: rgba(255, 255, 255, 0.4); /* Light grey color with 40% opacity */\n"
"}\n"
""));
        label_4 = new QLabel(createPost);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 390, 111, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color:transparent;"));
        createpushButton = new QPushButton(createPost);
        createpushButton->setObjectName("createpushButton");
        createpushButton->setGeometry(QRect(370, 480, 121, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        createpushButton->setFont(font1);
        createpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        groupBox = new QGroupBox(createPost);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 591, 581));
        groupBox->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: #0B2161;"));
        groupBox->raise();
        label->raise();
        label_2->raise();
        postid->raise();
        description->raise();
        label_3->raise();
        todaysdate->raise();
        label_4->raise();
        createpushButton->raise();

        retranslateUi(createPost);

        QMetaObject::connectSlotsByName(createPost);
    } // setupUi

    void retranslateUi(QDialog *createPost)
    {
        createPost->setWindowTitle(QCoreApplication::translate("createPost", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("createPost", "Lets Create A New Post", nullptr));
        label_2->setText(QCoreApplication::translate("createPost", " Post ID:", nullptr));
        description->setPlaceholderText(QString());
        label_3->setText(QCoreApplication::translate("createPost", " Post Description", nullptr));
        label_4->setText(QCoreApplication::translate("createPost", "Today's Date", nullptr));
        createpushButton->setText(QCoreApplication::translate("createPost", "Create", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class createPost: public Ui_createPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPOST_H
