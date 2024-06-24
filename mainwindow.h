#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signup.h"
#include "classes.h"
#include"socialapp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString getUsername();
    QString getEmail();
    User* getCurrentUser();
    app* getMyApp();
    socialapp* getSocialWindow();

private slots:
    void on_SignUp_clicked();
    void on_SignIn_clicked();

private:
    Ui::MainWindow *ui;
    QString username;
    QString email;
    User* currentUser;
    app* myApp;
    socialapp* socialWindow;
};

#endif // MAINWINDOW_H
