#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "datewindow.h"
#include "socialapp.h"
#include <QFile>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    currentUser(nullptr),
    myApp(nullptr),
    socialWindow(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SignUp_clicked()
{
    SignUp signup;
    signup.setModal(true);
    if (signup.exec() == QDialog::Accepted) {
        email = signup.getEmail();
    }
}

QString MainWindow::getUsername()
{
    return username;
}

QString MainWindow::getEmail()
{
    return email;
}

User* MainWindow::getCurrentUser()
{
    return currentUser;
}

app* MainWindow::getMyApp()
{
    return myApp;
}

socialapp* MainWindow::getSocialWindow()
{
    return socialWindow;
}

void MainWindow::on_SignIn_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    QFile file("userdata.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open userdata.txt for reading.");
        return;
    }

    QTextStream in(&file);
    bool loggedIn = false;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() >= 2) {
            QString storedUsername = parts[0].trimmed();
            QString storedPassword = parts[1].trimmed();
            if (storedUsername == username && storedPassword == password) {
                loggedIn = true;
                break;
            }
        }
    }

    file.close();

    if (loggedIn) {
        if (!myApp) {
            myApp = new app;
        }

        currentUser = new User(username.size(), username);
        myApp->setCurrentUser(currentUser);
        myApp->setUserDetails(username, email);
        DateWindow *dateWindow = new DateWindow(this);
        dateWindow->setModal(true);
        dateWindow->setWelcomeLabel(username);
        dateWindow->show();
        this->hide();
        socialWindow = new socialapp(currentUser, email, myApp, this);
        socialWindow->updateCounts(currentUser->getnoOfFriends(), currentUser->gettimeLineCount());
    } else {
        if (username.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "Login Failed", "Username or password cannot be empty.");
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
        }
    }
}
