#ifndef TIMELINE_H
#define TIMELINE_H

#include <QDialog>
#include "classes.h"
#include "mainwindow.h"
namespace Ui {
class timeline;
}

class timeline : public QDialog
{
    Q_OBJECT

public:
    explicit timeline(User* currentUser, QWidget *parent = nullptr);
    ~timeline();

private slots:
    void on_pushButton_clicked();


private:
    Ui::timeline *ui;
    User* currentUser;

    void displayTimeline(); };

#endif
