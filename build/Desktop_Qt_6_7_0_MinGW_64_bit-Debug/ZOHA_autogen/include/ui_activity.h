/********************************************************************************
** Form generated from reading UI file 'activity.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITY_H
#define UI_ACTIVITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_activity
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *addActivity;

    void setupUi(QDialog *activity)
    {
        if (activity->objectName().isEmpty())
            activity->setObjectName("activity");
        activity->resize(569, 422);
        activity->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: #0B2161;\n"
"}\n"
"\n"
"QComboBox {\n"
"    background-color: rgb(0, 0, 127); \n"
"    color: white; \n"
"    border: 3px solid rgb(0, 0, 127); \n"
"    border-radius: 5px; \n"
"    padding: 3px; \n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: rgb(0, 0, 127); \n"
"    color: black; \n"
"    border: 3px solid rgb(0, 0, 127); \n"
"    border-radius: 5px; \n"
"    padding: 3px;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: rgb(30, 144, 255); \n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: rgb(30, 144, 255); \n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: white; \n"
"    color: black; \n"
"    border: none; \n"
"    border-radius: 20px; \n"
"    padding: 10px 20px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(255, 255, 255, 0.3); \n"
"}\n"
""));
        label = new QLabel(activity);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 531, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        label_2 = new QLabel(activity);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 60, 321, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        comboBox = new QComboBox(activity);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(100, 170, 351, 41));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        label_3 = new QLabel(activity);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 140, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        lineEdit = new QLineEdit(activity);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 260, 351, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(activity);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 230, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        addActivity = new QPushButton(activity);
        addActivity->setObjectName("addActivity");
        addActivity->setGeometry(QRect(320, 330, 121, 51));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        addActivity->setFont(font2);

        retranslateUi(activity);

        QMetaObject::connectSlotsByName(activity);
    } // setupUi

    void retranslateUi(QDialog *activity)
    {
        activity->setWindowTitle(QCoreApplication::translate("activity", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("activity", "Want to Tell Your Friends about how you are Feeling?", nullptr));
        label_2->setText(QCoreApplication::translate("activity", "Add an Activity", nullptr));
        label_3->setText(QCoreApplication::translate("activity", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("activity", "Value:", nullptr));
        addActivity->setText(QCoreApplication::translate("activity", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class activity: public Ui_activity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITY_H
