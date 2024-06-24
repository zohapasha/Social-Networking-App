#ifndef SOCIALAPP_H
#define SOCIALAPP_H

#include <QDialog>
#include "classes.h"

namespace Ui {
class socialapp;
}

class socialapp : public QDialog
{
    Q_OBJECT

public:
    explicit socialapp(User* currentUser, const QString& email, app* myApp, QWidget *parent = nullptr);
    ~socialapp();
    void updateCounts(int friends, int posts);

private slots:
    void on_next_clicked();
    void on_prev_clicked();
    void on_learnmore_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_add_girl1_clicked();
    void on_add_man1_clicked();
    void on_viewfriendlist_clicked();
    void on_add_girl2_clicked();
    void on_add_man2_clicked();
    void on_add_girl3_clicked();
    void on_add_man3_clicked();
    void on_add_girl4_clicked();
    void on_add_man4_clicked();
    void on_add_man5_clicked();
    void on_add_man6_clicked();
    void on_add_girl5_clicked();
    void on_openTimeline_clicked();

    void on_sharememory_button_clicked();


    void on_homepageopen_clicked();


    void on_AddActivity_clicked();


    void on_enter_clicked();

    void on_enter_2_clicked();

    void on_viewapage_clicked();

private:
    Ui::socialapp *ui;
    User* currentUser;
    QString email;
    int noOfFriends;
    int noOfPosts;
    app* myApp; // Pointer to the myApp object
};

#endif // SOCIALAPP_H
