// createpost.h
#ifndef CREATEPOST_H
#define CREATEPOST_H

#include <QDialog>
#include "classes.h"

namespace Ui {
class createPost;
}

class createPost : public QDialog
{
    Q_OBJECT

public:
    explicit createPost(User* user, QWidget *parent = nullptr);
    ~createPost();

signals:
    void postCreated();

private slots:

    void on_createpushButton_clicked();

private:
    Ui::createPost *ui;
    User* currentUser;
};

#endif // CREATEPOST_H
