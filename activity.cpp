#include "activity.h"
#include "ui_activity.h"
#include <QDateTime>

activity::activity(User* currentUser, app* myApp, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::activity),
    currentUser(currentUser),
    myApp(myApp)
{
    ui->setupUi(this);
    // Populate the comboBox with values
    ui->comboBox->addItem("Feeling");
    ui->comboBox->addItem("Making");
    ui->comboBox->addItem("Thinking about");
    ui->comboBox->addItem("Celebrating");
}

activity::~activity()
{
    delete ui;
}

void activity::on_addActivity_clicked()
{
    QString activityType = ui->comboBox->currentText();
    QString activityValue = ui->lineEdit->text();

    int activityCode = 0;

    if (activityType == "Feeling")
        activityCode = 1;
    else if (activityType == "Thinking about")
        activityCode = 2;
    else if (activityType == "Making")
        activityCode = 3;
    else if (activityType == "Celebrating")
        activityCode = 4;

    if (!activityValue.isEmpty()) {

        Activity* newActivity = new Activity(activityCode, activityValue);

        std::string description = currentUser->getName().toStdString() + " is " + activityType.toLower().toStdString() + " " + activityValue.toStdString();

        QDateTime currentDateTime = QDateTime::currentDateTime();
        Date currentDate(currentDateTime.date().day(), currentDateTime.date().month(), currentDateTime.date().year(),
                         currentDateTime.time().hour(), currentDateTime.time().minute(), currentDateTime.time().second());

        Post* newPost = new Post(myApp->postIdcounter, description, currentUser, currentDate);

        myApp->postIdcounter++;

        currentUser->addToTimeline(newPost);

        close();
    }
}
