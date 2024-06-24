#ifndef SHAREAMEMORY_H
#define SHAREAMEMORY_H

#include <QDialog>
#include "classes.h"

namespace Ui {
class shareamemory;
}

class shareamemory : public QDialog
{
    Q_OBJECT

public:
    explicit shareamemory(User* user, QWidget *parent = nullptr);
    ~shareamemory();

private slots:
    void on_pushButton_clicked();

private:
    Ui::shareamemory *ui;
    User* currentUser;
};

#endif
