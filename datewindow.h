#ifndef DATEWINDOW_H
#define DATEWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class DateWindow;
}

class DateWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DateWindow(MainWindow *mainWindow, QWidget *parent = nullptr);
    ~DateWindow();
    void setWelcomeLabel(const QString &username);

private slots:
    void on_continue_2_clicked();

private:
    Ui::DateWindow *ui;
    MainWindow *mainWindow;
};

#endif // DATEWINDOW_H
