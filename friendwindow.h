#ifndef FRIENDWINDOW_H
#define FRIENDWINDOW_H

#include <QDialog>
#include <QVBoxLayout>
#include "classes.h"

namespace Ui {
class friendwindow;
}

class friendwindow : public QDialog
{
    Q_OBJECT

public:
    explicit friendwindow(QWidget *parent = nullptr, User* currentUser = nullptr);
    ~friendwindow();

private:
    Ui::friendwindow *ui;
    User* currentUser;
    QVBoxLayout *friendListLayout;

    void createFriendListLayout();
    void displayFriendList();
};

#endif // FRIENDWINDOW_H
