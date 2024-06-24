/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homepage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *labelpost1;
    QLabel *labelpost2;
    QLabel *labelpost3;
    QLabel *likeslabel1;
    QLabel *likeslabel2;
    QLabel *likeslabel3;
    QComboBox *comboBox1;
    QComboBox *comboBox2;
    QComboBox *comboBox3;
    QLabel *label;
    QComboBox *comboBox4;
    QComboBox *comboBox5;
    QComboBox *comboBox6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *heart1;
    QPushButton *heart2;
    QPushButton *heart3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *next;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser;
    QPushButton *prev;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QGroupBox *groupBox_3;
    QPushButton *page1;
    QPushButton *page2;
    QPushButton *page3;
    QPushButton *page4;

    void setupUi(QDialog *homepage)
    {
        if (homepage->objectName().isEmpty())
            homepage->setObjectName("homepage");
        homepage->resize(1116, 735);
        stackedWidget = new QStackedWidget(homepage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1121, 741));
        page = new QWidget();
        page->setObjectName("page");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 1121, 751));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: #0B2161;\n"
"border:none;\n"
"}\n"
"QLabel {\n"
"    color: black;\n"
"	background-color: rgb(255, 255, 255);\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QComboBox {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"\n"
"GroupBox QComboBox:hover {\n"
"   \n"
"	background-color: rgb(175, 175, 177);\n"
"}\n"
""));
        labelpost1 = new QLabel(groupBox);
        labelpost1->setObjectName("labelpost1");
        labelpost1->setGeometry(QRect(30, 110, 331, 171));
        QFont font;
        font.setBold(true);
        labelpost1->setFont(font);
        labelpost1->setStyleSheet(QString::fromUtf8(""));
        labelpost2 = new QLabel(groupBox);
        labelpost2->setObjectName("labelpost2");
        labelpost2->setGeometry(QRect(400, 110, 341, 171));
        labelpost2->setStyleSheet(QString::fromUtf8(""));
        labelpost3 = new QLabel(groupBox);
        labelpost3->setObjectName("labelpost3");
        labelpost3->setGeometry(QRect(770, 110, 331, 171));
        labelpost3->setStyleSheet(QString::fromUtf8(""));
        likeslabel1 = new QLabel(groupBox);
        likeslabel1->setObjectName("likeslabel1");
        likeslabel1->setGeometry(QRect(150, 300, 51, 51));
        likeslabel1->setFont(font);
        likeslabel1->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        likeslabel2 = new QLabel(groupBox);
        likeslabel2->setObjectName("likeslabel2");
        likeslabel2->setGeometry(QRect(520, 300, 51, 51));
        likeslabel2->setFont(font);
        likeslabel2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        likeslabel3 = new QLabel(groupBox);
        likeslabel3->setObjectName("likeslabel3");
        likeslabel3->setGeometry(QRect(870, 290, 51, 51));
        likeslabel3->setFont(font);
        likeslabel3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        comboBox1 = new QComboBox(groupBox);
        comboBox1->setObjectName("comboBox1");
        comboBox1->setGeometry(QRect(60, 420, 251, 41));
        comboBox1->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        comboBox2 = new QComboBox(groupBox);
        comboBox2->setObjectName("comboBox2");
        comboBox2->setGeometry(QRect(430, 420, 251, 41));
        comboBox2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        comboBox3 = new QComboBox(groupBox);
        comboBox3->setObjectName("comboBox3");
        comboBox3->setGeometry(QRect(800, 420, 251, 41));
        comboBox3->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 91, 31));
        label->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color: rgb(0, 0, 127);"));
        comboBox4 = new QComboBox(groupBox);
        comboBox4->setObjectName("comboBox4");
        comboBox4->setGeometry(QRect(60, 520, 251, 41));
        comboBox4->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        comboBox5 = new QComboBox(groupBox);
        comboBox5->setObjectName("comboBox5");
        comboBox5->setGeometry(QRect(430, 520, 251, 41));
        comboBox5->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        comboBox6 = new QComboBox(groupBox);
        comboBox6->setObjectName("comboBox6");
        comboBox6->setGeometry(QRect(800, 520, 251, 41));
        comboBox6->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 300, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/redheart.png);\n"
"background-color: #0B2161;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 300, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/redheart.png);\n"
"background-color: #0B2161;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(790, 300, 51, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/redheart.png);\n"
"background-color: #0B2161;\n"
"\n"
""));
        heart1 = new QPushButton(groupBox);
        heart1->setObjectName("heart1");
        heart1->setGeometry(QRect(60, 290, 71, 71));
        heart1->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
""));
        heart2 = new QPushButton(groupBox);
        heart2->setObjectName("heart2");
        heart2->setGeometry(QRect(420, 300, 71, 61));
        heart2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
""));
        heart3 = new QPushButton(groupBox);
        heart3->setObjectName("heart3");
        heart3->setGeometry(QRect(780, 290, 81, 61));
        heart3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
""));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 380, 91, 20));
        label_5->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 480, 91, 20));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(440, 380, 91, 20));
        label_7->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(440, 480, 91, 20));
        label_8->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(800, 380, 91, 20));
        label_9->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(800, 480, 91, 20));
        label_10->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_4->raise();
        labelpost1->raise();
        labelpost2->raise();
        labelpost3->raise();
        likeslabel1->raise();
        likeslabel2->raise();
        likeslabel3->raise();
        comboBox1->raise();
        comboBox2->raise();
        comboBox3->raise();
        label->raise();
        comboBox4->raise();
        comboBox5->raise();
        comboBox6->raise();
        label_2->raise();
        label_3->raise();
        heart1->raise();
        heart2->raise();
        heart3->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        next = new QPushButton(page);
        next->setObjectName("next");
        next->setGeometry(QRect(1020, 700, 93, 29));
        next->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(-10, 0, 1131, 741));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 20, 751, 701));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
" background-color: white;\n"
"border: none;\n"
"border-radius:20px\n"
""));
        prev = new QPushButton(groupBox_2);
        prev->setObjectName("prev");
        prev->setGeometry(QRect(1030, 700, 93, 29));
        prev->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(800, 20, 121, 121));
        label_11->setStyleSheet(QString::fromUtf8("background-image: url(:/page1.png);"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(810, 360, 121, 121));
        label_13->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border:none;\n"
" border-radius: 60px; \n"
"\n"
"background-image: url(:/page4.jpg);\n"
""));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(810, 520, 121, 121));
        label_14->setStyleSheet(QString::fromUtf8("background-image: url(:/page6.png);\n"
"\n"
"border:none;\n"
" border-radius: 60px; \n"
""));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(810, 180, 120, 121));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-image: url(:/page5.jpg);\n"
"border:none;\n"
"border-radius: 60px; \n"
"}\n"
""));
        page1 = new QPushButton(groupBox_2);
        page1->setObjectName("page1");
        page1->setGeometry(QRect(970, 70, 93, 29));
        page1->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ccc; \n"
"}\n"
""));
        page2 = new QPushButton(groupBox_2);
        page2->setObjectName("page2");
        page2->setGeometry(QRect(970, 220, 93, 29));
        page2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ccc; \n"
"}\n"
""));
        page3 = new QPushButton(groupBox_2);
        page3->setObjectName("page3");
        page3->setGeometry(QRect(970, 390, 93, 29));
        page3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ccc; \n"
"}\n"
""));
        page4 = new QPushButton(groupBox_2);
        page4->setObjectName("page4");
        page4->setGeometry(QRect(970, 560, 93, 29));
        page4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color:white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f0f0f0; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ccc; \n"
"}\n"
""));
        stackedWidget->addWidget(page_2);

        retranslateUi(homepage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(homepage);
    } // setupUi

    void retranslateUi(QDialog *homepage)
    {
        homepage->setWindowTitle(QCoreApplication::translate("homepage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        labelpost1->setText(QString());
        labelpost2->setText(QString());
        labelpost3->setText(QString());
        likeslabel1->setText(QString());
        likeslabel2->setText(QString());
        likeslabel3->setText(QString());
        label->setText(QCoreApplication::translate("homepage", "Home Page ", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        heart1->setText(QString());
        heart2->setText(QString());
        heart3->setText(QString());
        label_5->setText(QCoreApplication::translate("homepage", "Comments:", nullptr));
        label_6->setText(QCoreApplication::translate("homepage", "Liked By:", nullptr));
        label_7->setText(QCoreApplication::translate("homepage", "Comments:", nullptr));
        label_8->setText(QCoreApplication::translate("homepage", "Liked By:", nullptr));
        label_9->setText(QCoreApplication::translate("homepage", "Comments:", nullptr));
        label_10->setText(QCoreApplication::translate("homepage", "Liked By:", nullptr));
        next->setText(QCoreApplication::translate("homepage", "next page", nullptr));
        groupBox_2->setTitle(QString());
        prev->setText(QCoreApplication::translate("homepage", "prev page", nullptr));
        label_11->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("homepage", "GroupBox", nullptr));
        page1->setText(QCoreApplication::translate("homepage", "Following", nullptr));
        page2->setText(QCoreApplication::translate("homepage", "Following", nullptr));
        page3->setText(QCoreApplication::translate("homepage", "Following", nullptr));
        page4->setText(QCoreApplication::translate("homepage", "Following", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homepage: public Ui_homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
