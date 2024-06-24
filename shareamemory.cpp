#include "shareamemory.h"
#include "ui_shareamemory.h"
#include <QMessageBox>
#include <QDateTime>

shareamemory::shareamemory(User* user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shareamemory),
    currentUser(user)
{
    ui->setupUi(this);
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDate currentDate = currentDateTime.date();
    ui->currentdate->setText(currentDate.toString(Qt::ISODate));
}

shareamemory::~shareamemory()
{
    delete ui;
}

void shareamemory::on_pushButton_clicked()
{
    int postId = ui->originalpostid->text().toInt();
    QString description = ui->descriptionofmemory->text();
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDate currentDate = currentDateTime.date();
    Memory* memory = nullptr;
    for (int i = 0; i < currentUser->gettimeLineCount(); i++) {
        if (currentUser->getTimeLine()[i]->getId() == postId) {
            currentUser->shareMemory(currentUser->getTimeLine()[i], description.toStdString());
            close();
            return;
        }
    }
    QMessageBox::warning(this, "Error", "Post with the given ID not found!");


}
