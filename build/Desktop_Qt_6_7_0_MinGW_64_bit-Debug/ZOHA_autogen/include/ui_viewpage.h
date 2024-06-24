/********************************************************************************
** Form generated from reading UI file 'viewpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPAGE_H
#define UI_VIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewpage
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *viewpage)
    {
        if (viewpage->objectName().isEmpty())
            viewpage->setObjectName("viewpage");
        viewpage->resize(902, 745);
        groupBox = new QGroupBox(viewpage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-10, 0, 911, 91));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    background-color: #0B2161;\n"
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
"    border-radius: 10px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    backgrou"
                        "nd-color: #D8BFD8; /* Light purple background on hover */\n"
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
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 9, 261, 61));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent;"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(310, 20, 201, 51));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 20, 111, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        verticalLayoutWidget = new QWidget(viewpage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 90, 901, 661));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 897, 657));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 20, 831, 591));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(viewpage);

        QMetaObject::connectSlotsByName(viewpage);
    } // setupUi

    void retranslateUi(QDialog *viewpage)
    {
        viewpage->setWindowTitle(QCoreApplication::translate("viewpage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("viewpage", "View A Page", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("viewpage", "Enter Page ID:", nullptr));
        pushButton->setText(QCoreApplication::translate("viewpage", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewpage: public Ui_viewpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPAGE_H
