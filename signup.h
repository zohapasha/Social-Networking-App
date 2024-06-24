// signup.h

#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class SignUp; }
QT_END_NAMESPACE

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

    QString getEmail() const;

private slots:
    void on_signupButton_clicked();

private:
    Ui::SignUp *ui;
};

#endif
