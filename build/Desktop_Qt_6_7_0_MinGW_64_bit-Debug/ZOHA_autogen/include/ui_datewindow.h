/********************************************************************************
** Form generated from reading UI file 'datewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEWINDOW_H
#define UI_DATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DateWindow
{
public:
    QGroupBox *groupBox_3;
    QPushButton *continue_2;
    QLabel *label_3;
    QLineEdit *date;
    QLabel *label_4;
    QLineEdit *time;
    QLabel *welcomeLabel;

    void setupUi(QDialog *DateWindow)
    {
        if (DateWindow->objectName().isEmpty())
            DateWindow->setObjectName("DateWindow");
        DateWindow->resize(689, 483);
        groupBox_3 = new QGroupBox(DateWindow);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(0, 0, 691, 291));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font.setPointSize(24);
        font.setBold(true);
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("/* Stylesheet for GroupBox */\n"
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
"    border-radius: 20px;\n"
"    padding:"
                        " 5px 10px;\n"
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
        continue_2 = new QPushButton(groupBox_3);
        continue_2->setObjectName("continue_2");
        continue_2->setGeometry(QRect(440, 140, 201, 51));
        continue_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black; /* Black text */\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(179, 218, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; /* Dark gray background on pressed */\n"
"}\n"
"\n"
"QPushButton:selected {\n"
"    background-color: #D8BFD8; /* Light purple background on selection */}"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 60, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));
        date = new QLineEdit(groupBox_3);
        date->setObjectName("date");
        date->setGeometry(QRect(50, 90, 171, 51));
        date->setStyleSheet(QString::fromUtf8("color:white;"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 160, 81, 20));
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        time = new QLineEdit(groupBox_3);
        time->setObjectName("time");
        time->setGeometry(QRect(50, 200, 161, 51));
        time->setStyleSheet(QString::fromUtf8("color:white;"));
        welcomeLabel = new QLabel(DateWindow);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(40, 340, 431, 81));
        welcomeLabel->setFont(font);
        welcomeLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:#0B2161;;\n"
"\n"
""));

        retranslateUi(DateWindow);

        QMetaObject::connectSlotsByName(DateWindow);
    } // setupUi

    void retranslateUi(QDialog *DateWindow)
    {
        DateWindow->setWindowTitle(QCoreApplication::translate("DateWindow", "Dialog", nullptr));
        groupBox_3->setTitle(QString());
        continue_2->setText(QCoreApplication::translate("DateWindow", "Continue", nullptr));
        label_3->setText(QCoreApplication::translate("DateWindow", "Enter Date:", nullptr));
        date->setText(QString());
        date->setPlaceholderText(QCoreApplication::translate("DateWindow", "e.g 23/2/1024", nullptr));
        label_4->setText(QCoreApplication::translate("DateWindow", "Enter Time:", nullptr));
        time->setText(QString());
        time->setPlaceholderText(QCoreApplication::translate("DateWindow", "e.g 10::23:07", nullptr));
        welcomeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DateWindow: public Ui_DateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEWINDOW_H
