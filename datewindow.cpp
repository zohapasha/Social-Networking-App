#include "datewindow.h"
#include "ui_datewindow.h"
#include "socialapp.h"
#include<QMessageBox>

DateWindow::DateWindow(MainWindow *mainWindow, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DateWindow),
    mainWindow(mainWindow)
{
    ui->setupUi(this);
    ui->date->setInputMask("99/99/9999");
    ui->time->setInputMask("99:99:99");


}

DateWindow::~DateWindow()
{
    delete ui;
}

void DateWindow::setWelcomeLabel(const QString &username)
{
    ui->welcomeLabel->setText(" Welcome " + username + " !");
}

void DateWindow::on_continue_2_clicked()
{
    QString dateText = ui->date->text();
    QString timeText = ui->time->text();


    QStringList dateParts = dateText.split('/');
    QStringList timeParts = timeText.split(':');

    if (dateParts.size() != 3 || timeParts.size() != 3) {
        QMessageBox::critical(this, "Error", "Please enter both date and time in correct format (DD/MM/YYYY HH:MM:SS)");
        return;
    }

    int day = dateParts[0].toInt();
    int month = dateParts[1].toInt();
    int year = dateParts[2].toInt();
    int hour = timeParts[0].toInt();
    int minute = timeParts[1].toInt();
    int second = timeParts[2].toInt();

    Date enteredDate(day, month, year, hour, minute, second);

    if (!enteredDate.isValidDate()) {
        QMessageBox::critical(this, "Error", "Please enter a valid date (DD/MM/YYYY)");
        ui->date->clear();
        return;
    }

    if (!enteredDate.isValidTime()) {
        QMessageBox::critical(this, "Error", "Please enter a valid time (HH:MM:SS)");
        ui->time->clear();
        return;
    }

    socialapp *socialWindow = mainWindow->getSocialWindow();
    if (socialWindow) {
        socialWindow->show();
        this->hide();
    }
}

