/********************************************************************************
** Form generated from reading UI file 'timeline.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMELINE_H
#define UI_TIMELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timeline
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *timelineLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QLabel *UsersTimeline;

    void setupUi(QDialog *timeline)
    {
        if (timeline->objectName().isEmpty())
            timeline->setObjectName("timeline");
        timeline->resize(620, 761);
        horizontalLayoutWidget = new QWidget(timeline);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 621, 691));
        timelineLayout = new QHBoxLayout(horizontalLayoutWidget);
        timelineLayout->setObjectName("timelineLayout");
        timelineLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(horizontalLayoutWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: #0B2161;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 617, 687));
        scrollArea->setWidget(scrollAreaWidgetContents);

        timelineLayout->addWidget(scrollArea);

        pushButton = new QPushButton(timeline);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 700, 141, 41));
        UsersTimeline = new QLabel(timeline);
        UsersTimeline->setObjectName("UsersTimeline");
        UsersTimeline->setGeometry(QRect(230, 700, 281, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        UsersTimeline->setFont(font);

        retranslateUi(timeline);

        QMetaObject::connectSlotsByName(timeline);
    } // setupUi

    void retranslateUi(QDialog *timeline)
    {
        timeline->setWindowTitle(QCoreApplication::translate("timeline", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("timeline", "ADD TO TIMELIME", nullptr));
        UsersTimeline->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class timeline: public Ui_timeline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMELINE_H
