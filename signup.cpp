#include "signup.h"
#include "ui_signup.h"
#include <QFile>
#include <QMessageBox>

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_signupButton_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    QString email = ui->lineEditEmail->text();
    QString ageStr = ui->lineEditAge->text();

    if (username.isEmpty() || password.isEmpty() || email.isEmpty() || ageStr.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Error");
        msgBox.setInformativeText("All fields are required.");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStyleSheet("QMessageBox { background-color: white; border: 2px solid black; }");
        msgBox.exec();
        return;
    }

    bool conversionOk = false;
    int age = ageStr.toInt(&conversionOk);
    if (!conversionOk || age < 18) {
        QMessageBox msgBox;
        msgBox.setText("Error");
        msgBox.setInformativeText("You must be 18 years or older to sign up.");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStyleSheet("QMessageBox { background-color: white; border: 2px solid black; }");
        msgBox.exec();
        return;
    }

    QFile file("userdata.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox msgBox;
        msgBox.setText("Error");
        msgBox.setInformativeText("Failed to open userdata.txt for writing.");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStyleSheet("QMessageBox { background-color: white; border: 2px solid black; }");
        msgBox.exec();
        return;
    }

    QTextStream out(&file);
    out << username << "," << password << "\n";
    file.close();

    ui->lineEditUsername->clear();
    ui->lineEditPassword->clear();
    ui->lineEditEmail->clear();
    ui->lineEditAge->clear();

    this->close();
}

QString SignUp::getEmail() const
{
    return ui->lineEditEmail->text();
}
