#ifndef VIEWPAGE_H
#define VIEWPAGE_H

#include <QDialog>
#include "classes.h"

QT_BEGIN_NAMESPACE
namespace Ui { class viewpage; }
QT_END_NAMESPACE

class viewpage : public QDialog
{
    Q_OBJECT

public:
    explicit viewpage(User* currentUser, app* myApp, QWidget *parent = nullptr);
    ~viewpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::viewpage *ui;
    User* currentUser;
    app* myApp;
};

#endif
