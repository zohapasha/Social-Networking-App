/********************************************************************************
** Form generated from reading UI file 'socialapp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCIALAPP_H
#define UI_SOCIALAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_socialapp
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QLabel *name;
    QLabel *email;
    QFrame *line;
    QPushButton *learnmore;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_28;
    QLabel *followerCount;
    QLabel *postCount;
    QLabel *label_29;
    QGroupBox *groupBox_3;
    QPushButton *homepageopen;
    QPushButton *viewfriendlist;
    QPushButton *openTimeline;
    QPushButton *sharememory_button;
    QPushButton *viewapage;
    QPushButton *AddActivity;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *add_girl1;
    QLabel *label_17;
    QPushButton *add_man1;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *add_girl2;
    QPushButton *add_man2;
    QPushButton *add_girl3;
    QPushButton *add_man3;
    QWidget *page_4;
    QPushButton *pushButton_6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *add_girl4;
    QPushButton *add_man4;
    QPushButton *add_man5;
    QPushButton *add_man6;
    QPushButton *add_girl5;
    QPushButton *next;
    QLabel *label_33;
    QLabel *likedpagescount;
    QWidget *page2;
    QGroupBox *groupBox;
    QPushButton *prev;
    QFrame *line_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *postid;
    QComboBox *comments;
    QComboBox *likedby;
    QPushButton *enter;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *likes;
    QLabel *post;
    QLineEdit *commentpostid;
    QLineEdit *newComment;
    QPushButton *enter_2;

    void setupUi(QDialog *socialapp)
    {
        if (socialapp->objectName().isEmpty())
            socialapp->setObjectName("socialapp");
        socialapp->resize(1114, 767);
        stackedWidget = new QStackedWidget(socialapp);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1131, 751));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page1 = new QWidget();
        page1->setObjectName("page1");
        verticalLayoutWidget_2 = new QWidget(page1);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 1141, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(verticalLayoutWidget_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        name = new QLabel(groupBox_2);
        name->setObjectName("name");
        name->setGeometry(QRect(210, 80, 261, 51));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        name->setFont(font);
        name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
""));
        email = new QLabel(groupBox_2);
        email->setObjectName("email");
        email->setGeometry(QRect(450, 100, 201, 31));
        QFont font1;
        font1.setPointSize(12);
        email->setFont(font1);
        email->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:none;\n"
""));

        verticalLayout_2->addWidget(groupBox_2);

        line = new QFrame(page1);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 260, 1131, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        learnmore = new QPushButton(page1);
        learnmore->setObjectName("learnmore");
        learnmore->setGeometry(QRect(800, 180, 231, 61));
        QFont font2;
        font2.setPointSize(11);
        learnmore->setFont(font2);
        learnmore->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: black;\n"
"    background-color: rgb(182, 180, 188);\n"
"    border-radius: 20px; /* Adjust the value to control the roundness */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(222, 222, 222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 0, 106);\n"
"}\n"
""));
        label_3 = new QLabel(page1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(730, 190, 41, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/info.png);"));
        label_4 = new QLabel(page1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 440, 191, 20));
        label_5 = new QLabel(page1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 190, 91, 20));
        QFont font3;
        font3.setPointSize(10);
        label_5->setFont(font3);
        label_28 = new QLabel(page1);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(350, 190, 63, 20));
        label_28->setFont(font3);
        followerCount = new QLabel(page1);
        followerCount->setObjectName("followerCount");
        followerCount->setGeometry(QRect(210, 219, 71, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        followerCount->setFont(font4);
        followerCount->setStyleSheet(QString::fromUtf8(""));
        postCount = new QLabel(page1);
        postCount->setObjectName("postCount");
        postCount->setGeometry(QRect(350, 219, 61, 31));
        postCount->setFont(font4);
        postCount->setStyleSheet(QString::fromUtf8(""));
        label_29 = new QLabel(page1);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(20, 110, 151, 131));
        label_29->setStyleSheet(QString::fromUtf8("background-image: url(:/logo.png);"));
        groupBox_3 = new QGroupBox(page1);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 290, 1121, 101));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 0; \n"
"}\n"
"\n"
"QPushButton {\n"
"    border: 2px solid black;\n"
"    border-radius: 20px; \n"
"    padding: 5px 10px; \n"
"    color: black; \n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightgrey; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c0c0c0; \n"
"}\n"
""));
        homepageopen = new QPushButton(groupBox_3);
        homepageopen->setObjectName("homepageopen");
        homepageopen->setGeometry(QRect(400, 10, 121, 50));
        viewfriendlist = new QPushButton(groupBox_3);
        viewfriendlist->setObjectName("viewfriendlist");
        viewfriendlist->setGeometry(QRect(210, 10, 121, 50));
        openTimeline = new QPushButton(groupBox_3);
        openTimeline->setObjectName("openTimeline");
        openTimeline->setGeometry(QRect(10, 10, 121, 50));
        sharememory_button = new QPushButton(groupBox_3);
        sharememory_button->setObjectName("sharememory_button");
        sharememory_button->setGeometry(QRect(580, 10, 121, 50));
        viewapage = new QPushButton(groupBox_3);
        viewapage->setObjectName("viewapage");
        viewapage->setGeometry(QRect(760, 10, 121, 50));
        AddActivity = new QPushButton(groupBox_3);
        AddActivity->setObjectName("AddActivity");
        AddActivity->setGeometry(QRect(950, 10, 121, 50));
        stackedWidget_2 = new QStackedWidget(page1);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, 480, 1131, 171));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"	background-color: rgb(229, 229, 229);\n"
"}\n"
"QLabel {\n"
"    background-repeat: no-repeat; /* Prevent image from repeating */\n"
"    background-position: center; /* Center-align the image */\n"
"  border-radius:35px;\n"
"    width: 80px; /* Set the width of the QLabel to 90px */\n"
"    height: 90px; /* Set the height of the QLabel to 90px */\n"
"}\n"
"\n"
"\n"
"/* Optional: Hover and Pressed States */\n"
"QLabel.circular:hover {\n"
"    background-color: #e0e0e0; /* Change color on hover if desired */\n"
"}\n"
"\n"
"QLabel.circular:pressed {\n"
"    background-color: #bdbdbd; /* Change color when pressed if desired */\n"
"}\n"
"QPushButton {\n"
"   background-color: transparent;\n"
"	background-image: url(:/plus.png);\n"
"\n"
"}\n"
"\n"
"background-color: rgb(208, 208, 208);"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(990, 20, 92, 92));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 40px; \n"
"	background-image: url(:/right arrow.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #bdbdbd; /* Change color when button is pressed if desired */\n"
"}\n"
""));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 20, 90, 81));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/girl1.jpeg);"));
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 20, 90, 81));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/man 1.jpg);\n"
""));
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 20, 90, 81));
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/girl 2.jpeg);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(530, 20, 90, 81));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/man2.jpg);"));
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(690, 20, 90, 81));
        label_10->setStyleSheet(QString::fromUtf8("background-image: url(:/girl 3.jpg);"));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(850, 20, 90, 81));
        label_11->setStyleSheet(QString::fromUtf8("background-image: url(:/man 3.png);"));
        add_girl1 = new QPushButton(page_3);
        add_girl1->setObjectName("add_girl1");
        add_girl1->setGeometry(QRect(100, -10, 51, 51));
        add_girl1->setStyleSheet(QString::fromUtf8(""));
        label_17 = new QLabel(page_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 110, 101, 20));
        add_man1 = new QPushButton(page_3);
        add_man1->setObjectName("add_man1");
        add_man1->setGeometry(QRect(270, -10, 51, 51));
        label_18 = new QLabel(page_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(210, 110, 71, 20));
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(370, 110, 101, 20));
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(550, 110, 81, 20));
        label_21 = new QLabel(page_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(700, 110, 101, 20));
        label_22 = new QLabel(page_3);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(850, 110, 101, 20));
        add_girl2 = new QPushButton(page_3);
        add_girl2->setObjectName("add_girl2");
        add_girl2->setGeometry(QRect(440, -10, 51, 51));
        add_man2 = new QPushButton(page_3);
        add_man2->setObjectName("add_man2");
        add_man2->setGeometry(QRect(600, -10, 51, 51));
        add_girl3 = new QPushButton(page_3);
        add_girl3->setObjectName("add_girl3");
        add_girl3->setGeometry(QRect(770, -10, 51, 51));
        add_man3 = new QPushButton(page_3);
        add_man3->setObjectName("add_man3");
        add_man3->setGeometry(QRect(920, -10, 51, 51));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 30, 98, 95));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 40px; \n"
"	background-image: url(:/left arrow.png);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0; /* Change color on hover if desired */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #bdbdbd; /* Change color when button is pressed if desired */\n"
"}\n"
""));
        label_12 = new QLabel(page_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(180, 20, 90, 81));
        label_12->setStyleSheet(QString::fromUtf8("background-image: url(:/girl 4.jpg);"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(340, 20, 90, 83));
        label_13->setStyleSheet(QString::fromUtf8("background-image: url(:/man4.jpg);"));
        label_14 = new QLabel(page_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(510, 20, 90, 81));
        label_14->setStyleSheet(QString::fromUtf8("background-image: url(:/man 6.jpg);"));
        label_15 = new QLabel(page_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(670, 20, 90, 81));
        label_15->setStyleSheet(QString::fromUtf8("background-image: url(:/man 5.jpg);"));
        label_16 = new QLabel(page_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(820, 20, 90, 85));
        label_16->setStyleSheet(QString::fromUtf8("background-image: url(:/fatima.jpg);"));
        label_23 = new QLabel(page_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(180, 110, 101, 20));
        label_24 = new QLabel(page_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(350, 110, 111, 20));
        label_25 = new QLabel(page_4);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(520, 110, 101, 20));
        label_26 = new QLabel(page_4);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(690, 110, 81, 20));
        label_27 = new QLabel(page_4);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(830, 110, 111, 20));
        add_girl4 = new QPushButton(page_4);
        add_girl4->setObjectName("add_girl4");
        add_girl4->setGeometry(QRect(250, -10, 51, 51));
        add_man4 = new QPushButton(page_4);
        add_man4->setObjectName("add_man4");
        add_man4->setGeometry(QRect(410, -10, 51, 51));
        add_man5 = new QPushButton(page_4);
        add_man5->setObjectName("add_man5");
        add_man5->setGeometry(QRect(580, -10, 51, 51));
        add_man6 = new QPushButton(page_4);
        add_man6->setObjectName("add_man6");
        add_man6->setGeometry(QRect(740, -10, 51, 51));
        add_girl5 = new QPushButton(page_4);
        add_girl5->setObjectName("add_girl5");
        add_girl5->setGeometry(QRect(890, -10, 51, 51));
        stackedWidget_2->addWidget(page_4);
        next = new QPushButton(page1);
        next->setObjectName("next");
        next->setGeometry(QRect(982, 698, 121, 51));
        next->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
" \n"
"    padding: 10px 20px; /* Adjust padding as needed */\n"
"    border-radius: 20px; /* Add border-radius for rounded corners */\n"
"    color: black; /* Text color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0B2161; /* Change background color on hover */\n"
"    color: white; /* Change text color on hover */\n"
"}\n"
""));
        label_33 = new QLabel(page1);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(460, 190, 91, 20));
        likedpagescount = new QLabel(page1);
        likedpagescount->setObjectName("likedpagescount");
        likedpagescount->setGeometry(QRect(470, 220, 61, 31));
        likedpagescount->setFont(font4);
        likedpagescount->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        groupBox = new QGroupBox(page2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 1121, 761));
        groupBox->setStyleSheet(QString::fromUtf8("/* Stylesheet for GroupBox */\n"
"QGroupBox {\n"
"    background-color: #0B2161; /* Royal deep blue background */\n"
"    border:none;\n"
"  \n"
"}\n"
"\n"
"/* Stylesheet for Labels */\n"
"QLabel {\n"
"    background-color: transparent; \n"
"    color: white; /* White text */\n"
"}\n"
"\n"
"/* Stylesheet for LineEdits */\n"
"QLineEdit {\n"
"    background-color: transparent; /* Transparent background */\n"
"    color: white; /* White text */\n"
"    border: 2px solid white; /* White border */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #FFFFFF; /* Lighter white border on hover */\n"
"}\n"
"\n"
"QLineEdit:selected {\n"
"    background-color: #D8BFD8; /* Light purple background on selection */\n"
"}\n"
"\n"
"/* Stylesheet for PushButton */\n"
"QPushButton {\n"
"    background-color: #FFFFFF; /* White background */\n"
"    color: black; /* Black text */\n"
"    border: 2px solid white; /* White border */\n"
"    border-radius: 5px;\n"
"    padding: "
                        "5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #D8BFD8; /* Light purple background on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; /* Dark gray background on pressed */\n"
"}\n"
"\n"
"QPushButton:selected {\n"
"    background-color: #D8BFD8; /* Light purple background on selection */\n"
"}\n"
""));
        prev = new QPushButton(groupBox);
        prev->setObjectName("prev");
        prev->setGeometry(QRect(982, 678, 121, 61));
        prev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-style: solid;\n"
"    border-width: 4px;\n"
"    border-color: #0B2161;\n"
"    padding: 10px 20px; /* Adjust padding as needed */\n"
"    border-radius: 20px; /* Add border-radius for rounded corners */\n"
"    color: black; /* Text color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0B2161; /* Change background color on hover */\n"
"    color: white; /* Change text color on hover */\n"
"}\n"
""));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(550, 0, 16, 751));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 0, 331, 81));
        QFont font5;
        font5.setPointSize(24);
        font5.setBold(true);
        font5.setItalic(true);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 0, 421, 81));
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        postid = new QLineEdit(groupBox);
        postid->setObjectName("postid");
        postid->setGeometry(QRect(70, 100, 411, 41));
        comments = new QComboBox(groupBox);
        comments->setObjectName("comments");
        comments->setGeometry(QRect(70, 430, 411, 41));
        comments->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 2px;\n"
"}\n"
" QComboBox:hover {\n"
"   \n"
"	background-color: rgb(175, 175, 177);\n"
"}\n"
""));
        likedby = new QComboBox(groupBox);
        likedby->setObjectName("likedby");
        likedby->setGeometry(QRect(70, 510, 411, 41));
        likedby->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 2px;\n"
"}\n"
" QComboBox:hover {\n"
"   \n"
"	background-color: rgb(175, 175, 177);\n"
"}\n"
""));
        enter = new QPushButton(groupBox);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(190, 600, 161, 61));
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        enter->setFont(font6);
        enter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: none;\n"
"    border-radius: 20px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3;\n"
"}"));
        label_30 = new QLabel(groupBox);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(70, 400, 91, 20));
        label_31 = new QLabel(groupBox);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(70, 480, 91, 20));
        label_32 = new QLabel(groupBox);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(80, 340, 51, 51));
        label_32->setStyleSheet(QString::fromUtf8("background-image: url(:/redheart.png);"));
        likes = new QLabel(groupBox);
        likes->setObjectName("likes");
        likes->setGeometry(QRect(140, 350, 61, 31));
        post = new QLabel(groupBox);
        post->setObjectName("post");
        post->setGeometry(QRect(70, 180, 411, 151));
        post->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: none;\n"
"    border-radius: 20px;\n"
"    padding: 10px 20px;\n"
"\n"
""));
        commentpostid = new QLineEdit(groupBox);
        commentpostid->setObjectName("commentpostid");
        commentpostid->setGeometry(QRect(630, 100, 411, 41));
        newComment = new QLineEdit(groupBox);
        newComment->setObjectName("newComment");
        newComment->setGeometry(QRect(630, 180, 411, 151));
        enter_2 = new QPushButton(groupBox);
        enter_2->setObjectName("enter_2");
        enter_2->setGeometry(QRect(770, 390, 161, 61));
        enter_2->setFont(font6);
        enter_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: none;\n"
"    border-radius: 20px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3;\n"
"}"));
        stackedWidget->addWidget(page2);

        retranslateUi(socialapp);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(socialapp);
    } // setupUi

    void retranslateUi(QDialog *socialapp)
    {
        socialapp->setWindowTitle(QCoreApplication::translate("socialapp", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        name->setText(QString());
        email->setText(QString());
        learnmore->setText(QCoreApplication::translate("socialapp", "Learn more", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("socialapp", "PEOPLE U MIGHT KNOW", nullptr));
        label_5->setText(QCoreApplication::translate("socialapp", "Friends", nullptr));
        label_28->setText(QCoreApplication::translate("socialapp", "Posts", nullptr));
        followerCount->setText(QString());
        postCount->setText(QString());
        label_29->setText(QString());
        groupBox_3->setTitle(QString());
        homepageopen->setText(QCoreApplication::translate("socialapp", "Home Page", nullptr));
        viewfriendlist->setText(QCoreApplication::translate("socialapp", "Friend List", nullptr));
        openTimeline->setText(QCoreApplication::translate("socialapp", "Time line", nullptr));
        sharememory_button->setText(QCoreApplication::translate("socialapp", "Share Memory", nullptr));
        viewapage->setText(QCoreApplication::translate("socialapp", "View a Page", nullptr));
        AddActivity->setText(QCoreApplication::translate("socialapp", "Add Activity", nullptr));
        pushButton_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        add_girl1->setText(QString());
        label_17->setText(QCoreApplication::translate("socialapp", "@notyayesha", nullptr));
        add_man1->setText(QString());
        label_18->setText(QCoreApplication::translate("socialapp", "@itsayan", nullptr));
        label_19->setText(QCoreApplication::translate("socialapp", "@pooja_123", nullptr));
        label_20->setText(QCoreApplication::translate("socialapp", "@leomessi", nullptr));
        label_21->setText(QCoreApplication::translate("socialapp", "@mahahaha", nullptr));
        label_22->setText(QCoreApplication::translate("socialapp", "@_ronaldo1", nullptr));
        add_girl2->setText(QString());
        add_man2->setText(QString());
        add_girl3->setText(QString());
        add_man3->setText(QString());
        pushButton_6->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_23->setText(QCoreApplication::translate("socialapp", "@savagesana", nullptr));
        label_24->setText(QCoreApplication::translate("socialapp", "@ali_hassan23", nullptr));
        label_25->setText(QCoreApplication::translate("socialapp", "@tech.ammar", nullptr));
        label_26->setText(QCoreApplication::translate("socialapp", "@sammy7", nullptr));
        label_27->setText(QCoreApplication::translate("socialapp", "@queenfatima", nullptr));
        add_girl4->setText(QString());
        add_man4->setText(QString());
        add_man5->setText(QString());
        add_man6->setText(QString());
        add_girl5->setText(QString());
        next->setText(QCoreApplication::translate("socialapp", "Next", nullptr));
        label_33->setText(QCoreApplication::translate("socialapp", "Liked Pages", nullptr));
        likedpagescount->setText(QString());
        groupBox->setTitle(QString());
        prev->setText(QCoreApplication::translate("socialapp", "Previous", nullptr));
        label->setText(QCoreApplication::translate("socialapp", "View A Post", nullptr));
        label_2->setText(QCoreApplication::translate("socialapp", "Comment On A Post", nullptr));
        postid->setPlaceholderText(QCoreApplication::translate("socialapp", "Enter Post ID:", nullptr));
        enter->setText(QCoreApplication::translate("socialapp", "Enter", nullptr));
        label_30->setText(QCoreApplication::translate("socialapp", "Comments: ", nullptr));
        label_31->setText(QCoreApplication::translate("socialapp", "Liked By:", nullptr));
        label_32->setText(QString());
        likes->setText(QString());
        post->setText(QString());
        commentpostid->setPlaceholderText(QCoreApplication::translate("socialapp", "Enter Post ID:", nullptr));
        newComment->setPlaceholderText(QCoreApplication::translate("socialapp", "Enter Comment: ", nullptr));
        enter_2->setText(QCoreApplication::translate("socialapp", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class socialapp: public Ui_socialapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCIALAPP_H
