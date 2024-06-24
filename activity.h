#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <QDialog>
#include "classes.h"

namespace Ui {
class activity;
}

class activity : public QDialog
{
    Q_OBJECT

public:
    explicit activity(User* currentUser, app* myApp, QWidget *parent = nullptr);
    ~activity();

private slots:
    void on_addActivity_clicked();

private:
    Ui::activity *ui;
    User *currentUser;
    app *myApp;
};

#endif // ACTIVITY_H
