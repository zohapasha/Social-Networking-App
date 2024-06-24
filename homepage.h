#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include "classes.h"
#include "ui_homepage.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QComboBox>

namespace Ui {
class homepage;
}

class homepage : public QDialog
{
    Q_OBJECT

public:
    explicit homepage(User* currentUser, app* myApp, QWidget *parent = nullptr);
    ~homepage();

signals:
    void heart1Clicked();
    void heart2Clicked();
    void heart3Clicked();
private slots:

    void on_next_clicked();

    void on_prev_clicked();

    void on_heart1_clicked();

    void on_heart2_clicked();

    void on_heart3_clicked();


private:
    Ui::homepage *ui;
    User* currentUser;
    app* myApp;

    void displayPosts();
    void displayPost(QLabel* postLabel, QLabel* likeLabel, QComboBox* comboBox,QComboBox* comboBox2, Post* post);
};

#endif // HOMEPAGE_H
