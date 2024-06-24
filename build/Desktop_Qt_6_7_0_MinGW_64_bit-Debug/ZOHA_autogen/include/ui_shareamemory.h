/********************************************************************************
** Form generated from reading UI file 'shareamemory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREAMEMORY_H
#define UI_SHAREAMEMORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_shareamemory
{
public:
    QLabel *label;
    QLineEdit *originalpostid;
    QLineEdit *descriptionofmemory;
    QLineEdit *currentdate;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;

    void setupUi(QDialog *shareamemory)
    {
        if (shareamemory->objectName().isEmpty())
            shareamemory->setObjectName("shareamemory");
        shareamemory->resize(507, 610);
        shareamemory->setStyleSheet(QString::fromUtf8("b\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(shareamemory);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 391, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: transparent;"));
        originalpostid = new QLineEdit(shareamemory);
        originalpostid->setObjectName("originalpostid");
        originalpostid->setGeometry(QRect(60, 130, 391, 41));
        originalpostid->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"    background-color: rgba(255, 255, 255, 0.4); \n"
"}\n"
""));
        descriptionofmemory = new QLineEdit(shareamemory);
        descriptionofmemory->setObjectName("descriptionofmemory");
        descriptionofmemory->setGeometry(QRect(60, 220, 391, 161));
        descriptionofmemory->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        currentdate = new QLineEdit(shareamemory);
        currentdate->setObjectName("currentdate");
        currentdate->setGeometry(QRect(60, 420, 391, 41));
        currentdate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        pushButton = new QPushButton(shareamemory);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 490, 111, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Emoji")});
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(shareamemory);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 151, 20));
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent"));
        label_3 = new QLabel(shareamemory);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 190, 151, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent"));
        label_4 = new QLabel(shareamemory);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 390, 111, 20));
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent"));
        groupBox = new QGroupBox(shareamemory);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-50, 0, 561, 611));
        groupBox->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:#0B2161;"));
        groupBox->raise();
        label->raise();
        originalpostid->raise();
        descriptionofmemory->raise();
        currentdate->raise();
        pushButton->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(shareamemory);

        QMetaObject::connectSlotsByName(shareamemory);
    } // setupUi

    void retranslateUi(QDialog *shareamemory)
    {
        shareamemory->setWindowTitle(QCoreApplication::translate("shareamemory", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("shareamemory", "Lets Share A Memory", nullptr));
        pushButton->setText(QCoreApplication::translate("shareamemory", "Share", nullptr));
        label_2->setText(QCoreApplication::translate("shareamemory", " Original Post Id:", nullptr));
        label_3->setText(QCoreApplication::translate("shareamemory", " Description:", nullptr));
        label_4->setText(QCoreApplication::translate("shareamemory", "Today's Date:", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class shareamemory: public Ui_shareamemory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREAMEMORY_H
