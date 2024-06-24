// createpost.cpp
#include "createpost.h"
#include "ui_createpost.h"
#include <QDateTime>
#include <QFile>
#include <QTextStream>
#include<QMessageBox>

createPost::createPost(User* user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createPost),
    currentUser(user)
{
    ui->setupUi(this);

    QDate currentDate = QDate::currentDate();
    ui->todaysdate->setText(currentDate.toString(Qt::ISODate));

}

createPost::~createPost()
{
    delete ui;
}

void createPost::on_createpushButton_clicked()
{

    if (ui->postid->text().isEmpty() || ui->description->text().isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill in all fields.");
        return;
    }

    int postId = ui->postid->text().toInt();
    QString description = ui->description->text();


    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDate currentDate = currentDateTime.date();
    QTime currentTime = currentDateTime.time();

    Date sharedDate(currentDate.day(), currentDate.month(), currentDate.year(),
                    currentTime.hour(), currentTime.minute(), currentTime.second());

    Post* newPost = new Post(postId, description.toStdString(), currentUser, sharedDate);


    currentUser->addToTimeline(newPost);

    QFile file("userPosts.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open userPosts file.";
        return;
    }

    QStringList lines;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lines << in.readLine();
    }

    int pos = lines.indexOf(currentUser->getName());
    if (pos == -1) {
        qDebug() << "User not found in the file.";
        return;
    }

    while (pos < lines.size() && !lines[pos].startsWith("-1")) {
        pos++;
    }

    QString newPostDetails = QString("%1\n%2\n%3\n%4 %5 %6 %7 %8 %9\n")
                                 .arg(postId)
                                 .arg(description)
                                 .arg(currentUser->getName())
                                 .arg(sharedDate.getDay())
                                 .arg(sharedDate.getMonth())
                                 .arg(sharedDate.getYear())
                                 .arg(sharedDate.getHour())
                                 .arg(sharedDate.getMinute())
                                 .arg(sharedDate.getSecond());
    lines.insert(pos + 1, newPostDetails);

    file.resize(0);
    QTextStream out(&file);
    for (const QString &line : lines) {
        out << line << "\n";
    }

    file.close();

    emit postCreated();

    close();
}

