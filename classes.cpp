#include <string>
#include <QString>
#include <QDebug>
#include<QFile>
#include "classes.h"
#include<QDateTime>

Date::Date(int day, int month, int year, int hour, int minute, int second)
    : m_day(day), m_month(month), m_year(year), m_hour(hour), m_minute(minute), m_second(second) {}
Date::Date(const Date& other)
    : m_day(other.m_day), m_month(other.m_month), m_year(other.m_year),
    m_hour(other.m_hour), m_minute(other.m_minute), m_second(other.m_second) {}


void Date::setDay(int day) {
    m_day = day;
}

void Date::setMonth(int month) {
    m_month = month;
}

void Date::setYear(int year) {
    m_year = year;
}

void Date::setHour(int hour) {
    m_hour = hour;
}

void Date::setMinute(int minute) {
    m_minute = minute;
}

void Date::setSecond(int second) {
    m_second = second;
}

int Date::getDay() const {
    return m_day;
}

int Date::getMonth() const {
    return m_month;
}

int Date::getYear() const {
    return m_year;
}

int Date::getHour() const {
    return m_hour;
}

int Date::getMinute() const {
    return m_minute;
}

int Date::getSecond() const {
    return m_second;
}

bool Date::isValidDate() const {
    return m_day >= 1 && m_day <= 31 && m_month >= 1 && m_month <= 12 && m_year >= 1900;
}

bool Date::isValidTime() const {
    return m_hour >= 0 && m_hour < 24 && m_minute >= 0 && m_minute < 60 && m_second >= 0 && m_second < 60;
}

Post::Post(int id, std::string description, User* author, Date sharedDate)
    : id(id), description(description), author(author), sharedDate(sharedDate) {
    numOfLikes = 0;
    likes = new User*[MAX_LIKES];
    comments = new Comment*[MAX_COMMENTS];
    numOfComments=0;
}

Post::~Post() {

    delete[] likes;
    delete[] comments;
}

int Post::getId() {
    return id;
}

std::string Post::getDescription() {
    return description;
}

User* Post::getAuthor() {
    return author;
}

Date Post::getSharedDate() {
    return sharedDate;
}

void Post::AddLike(User* user) {
    if (numOfLikes < 10) {
        likes[numOfLikes] = user;
        numOfLikes++;
        qDebug()<<"liked added. "<<numOfLikes;
    } else {

        qDebug() << "Maximum likes reached. Cannot add more than 10 likes.";
    }
}

User** Post::getLikedBy() {
    return likes;
}

int Post::getLikeCount() {
    return numOfLikes;
}

void Post::viewPost() {
    qDebug() << "Post ID:" << id << ", Description:" << description.c_str()
             << ", Author:" << author->getName() << ", Shared Date:"
             << sharedDate.getDay() << "/" << sharedDate.getMonth()
             << "/" << sharedDate.getYear();
}

void Post::AddComment(User* user, Comment* comment) {
    if (numOfComments < 10) {
        comments[numOfComments++] = comment;
        qDebug() <<"Comment ADDED "<<numOfComments;
    }
    else {
        qDebug() << "Maximum comments reached. Cannot add more than 10 comments.";
    }
}

Comment** Post::getComments() {
    return comments;
}

int Post::getCommentCount() {
    return numOfComments;
}

Comment::Comment(int id, std::string text, User* author)
    : id(id), text(text), author(author) {}

Comment::~Comment() {}

int Comment::getId() {
    return id;
}

std::string Comment::getText() {
    return text;
}

User* Comment::getAuthor() {
    return author;
}

Page::Page(int id, std::string title, User* owner)
    : id(id), title(title), owner(owner) {
    posts = new Post*[MAX_POSTS];
    noOflikes=0;
    numOfPosts=0;
}

Page::~Page() {
    delete[] posts;
}

int Page::getId() {
    return id;
}
int Page:: getNoOfLikes(){
    return noOflikes;
}
void Page::incrementLikeCount(){
    noOflikes++;
}
std::string Page::getTitle() {
    return title;
}

User* Page::getOwner() {
    return owner;
}

void Page::addPost(Post* post) {
    if (numOfPosts < MAX_POSTS) {
        posts[numOfPosts++] = post;
    }
    else {
        qDebug() << "Maximum posts reached. Cannot add more posts.";
    }
}
int Page::getNoOfPosts(){
    return numOfPosts;
}
Post** Page::getPosts(){
    return posts;
}
void Page::viewPage() {
    qDebug() << "Page Title:" << title.c_str();
    qDebug() << "Owner:" << owner->getName();
    qDebug() << "Posts on this Page:";
    for (int i = 0; i < numOfPosts; i++) {
        qDebug() << "Post ID:" << posts[i]->getId() << ", Description:" << posts[i]->getDescription().c_str();
    }
}
Memory::Memory(int id, std::string description, User* author, Date sharedDate, Post* originalPost, std::string text)
    : Post(id, description, author, sharedDate), originalPost(originalPost), text(text) {}

Memory::~Memory() {}

Post* Memory::getOriginalPost() {
    return originalPost;
}

Activity::Activity(int type, QString value)
    : type(type), value(value) {}

Activity::~Activity() {}

int Activity::getType() {
    return type;
}

QString Activity::getValue() {
    return value;
}

User::User(int id, QString name)
    : id(id), name(name), noOfFriends(0), timelineCount(0), currentDate(0, 0, 0, 0, 0, 0) {
    friends = new User*[MAX_FRIENDS];
    likedPages = new Page*[MAX_LIKED_PAGES];
    timeline = new Post*[MAX_TIMELINE_POSTS];
    noOflikedPages=0;
}

User::~User() {
    for (int i = 0; i < noOfFriends; i++) {
        delete friends[i];
    }
    delete[] friends;

    for (int i = 0; i < noOflikedPages; i++) {
        delete likedPages[i];
    }
    delete[] likedPages;

    for (int i = 0; i < timelineCount; i++) {
        delete timeline[i];
    }
    delete[] timeline;
}
int User::getId() {
    return id;
}

QString User::getName() {
    return name;
}
Page** User:: getLikedPages(){
    return likedPages;
}
void User::likePage(Page* page) {
    for (int i = 0; i < MAX_LIKED_PAGES; i++) {
        if (likedPages[i] == page) {
            qDebug() << "Page already liked by" << name << "!";
            return;
        }
    }

    for (int i = 0; i < MAX_LIKED_PAGES; i++) {
        if (likedPages[i] == nullptr) {
            likedPages[i] = page;
            noOflikedPages++;
            qDebug() << name << "liked page:" << page->getTitle();
            return;
        }
    }

    qDebug() << "Reached maximum limit for liked pages!";
}

bool User::isAlreadyLiked(Post* post) {
    User** likedBy = post->getLikedBy();
    int likedByCount = post->getLikeCount();

    for (int i = 0; i < likedByCount; ++i) {
        if (likedBy[i] == this) {
            return true;
        }
    }

    return false;
}


void User::addFriend(User* user) {
    if (noOfFriends < MAX_FRIENDS) {
        friends[noOfFriends++] = user;
    }
}

void User::viewFriendList() {
    qDebug() << "Friend List for" << name << ":";
    for (int i = 0; i < noOfFriends; i++) {
        qDebug() << friends[i]->getName();
    }
}
User** User:: getFriendlist(){
    return friends;
}
bool User::hasLikedPage(Page* page) const {
    for (int i = 0; i < noOflikedPages; ++i) {
        if (likedPages[i] == page) {
            return true;
        }
    }
    return false;
}

bool User::isFriend(User* user) {
    for (int i = 0; i < noOfFriends; i++) {
        if (friends[i] == user) {
            return true;
        }
    }
    return false;
}
bool User::operator==(const User& other) const {
    return id == other.id;
}
void User::likePost(Post* post) {
    post->AddLike(this);
}

void User::AddComment(Post* post, std::string text) {
    Comment* newComment = new Comment(post->getId(), text, this);
    post->AddComment(this, newComment);
}
void User::shareMemory(Post* post, std::string text) {
    if (timelineCount < MAX_TIMELINE_POSTS) {
        QDateTime currentDateTime = QDateTime::currentDateTime();
        QDate currentDate = currentDateTime.date();
        QTime currentTime = currentDateTime.time();

        int day = currentDate.day();
        int month = currentDate.month();
        int year = currentDate.year();
        int hour = currentTime.hour();
        int minute = currentTime.minute();
        int second = currentTime.second();

        Date sharedDate = post->getSharedDate();

        QString memoryDescription;
        memoryDescription += QString("~~~ %1 shared a memory ~~~ (%2/%3/%4 %5:%6:%7)\n\n").arg(name).arg(day).arg(month).arg(year).arg(hour).arg(minute).arg(second);
        memoryDescription += QString("\n\"%1\n\n\"").arg(post->getDescription().c_str());
        memoryDescription += text.c_str();

        int memoryId = post->getId();
        memoryId++;

        Post* memory = new Memory(memoryId, memoryDescription.toStdString(), this, Date(year, month, day, hour, minute, second), post, text);

        timeline[timelineCount++] = memory;
    } else {
        qDebug() << "Timeline is full. Cannot share memory.";
    }
    Comment* newComment = new Comment(post->getId(), text, this);
    post->AddComment(this, newComment);
}


void User::viewTimeline() {
    qDebug() << "Timeline for User:" << name;
    for (int i = 0; i < timelineCount; i++) {
        Post* post = timeline[i];
        if (post->isWithinLast24Hours(currentDate)) {
            qDebug() << "Post ID:" << post->getId() << ", Description:" << post->getDescription().c_str();
        }
    }
}
bool User::isLikedPage(Page* page) {

    for (int i = 0; i < noOflikedPages; i++) {
        if (likedPages[i] == page) {
            return true;
        }
    }
    return false;
}
int User:: getnoOflikedPages(){
    return noOflikedPages;
}
int User:: getnoOfFriends(){
    return noOfFriends;
}
int User:: gettimeLineCount(){
    return timelineCount;
}
void User::addToTimeline(Post* post) {
    if (timelineCount < MAX_TIMELINE_POSTS) {
        timeline[timelineCount++] = post;
        qDebug() << "Post added to timeline.";
    } else {
        qDebug() << "Timeline is full. Cannot add more posts.";
    }
}


void User::viewLikedPages() {
    qDebug() << "Liked Pages for User:" << name;
    for (int i = 0; i < MAX_LIKED_PAGES; i++) {
        if (likedPages[i] != nullptr) {
            qDebug() << "Page ID:" << likedPages[i]->getId() << ", Title:" << likedPages[i]->getTitle().c_str();
        }
    }
}

void User::viewComments(Post* post) {
    qDebug() << "Comments for Post ID" << post->getId() << ":";
    for (int i = 0; i < post->getCommentCount(); i++) {
        qDebug() << post->getComments()[i]->getText().c_str() << "by" << post->getComments()[i]->getAuthor()->getName();
    }
}

void User::viewPeopleWhoLiked(Post* post) {
    qDebug() << "People who liked Post ID" << post->getId() << ":";
    for (int i = 0; i < post->getLikeCount(); i++) {
        qDebug() << "User ID:" << post->getLikedBy()[i]->getName();
    }
}
Post** User:: getTimeLine(){
    return timeline;
}


bool Post::isWithinLast24Hours(Date& currentDate) {
    int daysDifference = currentDate.getDay() - sharedDate.getDay();
    int monthsDifference = currentDate.getMonth() - sharedDate.getMonth();
    int yearsDifference = currentDate.getYear() - sharedDate.getYear();
    int hoursDifference = currentDate.getHour() - sharedDate.getHour();
    int minutesDifference = currentDate.getMinute() - sharedDate.getMinute();
    int secondsDifference = currentDate.getSecond() - sharedDate.getSecond();

    if (daysDifference > 1 || (daysDifference == 1 && (hoursDifference < 0 || minutesDifference < 0 || secondsDifference < 0))) {
        return false;
    }

    return (monthsDifference == 0) && (yearsDifference == 0);
}


void Post::setActivityType(int type) {
    activityType = type;
}

int Post::getActivityType() {
    return activityType;
}

void Post::setActivityValue(std::string value) {
    activityValue = value;
}

std::string Post::getActivityValue() {
    return activityValue;
}


app::app() {
    userFriends = new User*[MAX_USERS];
    numofUserFriends = 0;
    AllPosts = new Post*[MAX_POSTS];
    AllPages = new Page*[20];
    postIdcounter = 0;
}



app::~app() {
    for (int i = 0; i <MAX_POSTS; ++i) {
        delete AllPosts[i];
    }
    delete[] AllPosts;

    for (int i = 0; i < MAX_PAGES; ++i) {
        if (AllPages[i] != nullptr) {
            delete AllPages[i];
        }
    }
    delete[] AllPages;

    for (int i = 0; i < numofUserFriends; ++i) {
        delete userFriends[i];
    }
    delete[] userFriends;
}


int app::postIdcounter=0;

void app::setCurrentUser(User* user) {
    currentUser = user;
    ReadFriendList();
    ReadUserPosts();
    //ReadFriendPosts();
    ReadPages();
}

void app::setUserDetails(const QString& username, const QString& email) {
    this->username = username;
    this->email = email;
    //ReadUserPosts();
}
void app::ReadFriendList() {
    QFile file("friends.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "sowie Unable to open friend list.txt";
        return;
    }

    QTextStream in(&file);
    QString line;
    bool foundCurrentUser = false;
    while (!in.atEnd()) {
        line = in.readLine().trimmed();
        if (line.isEmpty()) {
            continue;
        }
        if (!foundCurrentUser && line == currentUser->getName()) {
            foundCurrentUser = true;
            continue;
        }
        if (foundCurrentUser && line == "-1") {
            foundCurrentUser = false;
            continue; // Move to the next user
        }
        if (foundCurrentUser) {
            // Split the line into user ID and name
            QStringList parts = line.split(' ');
            if (parts.size() != 2) {
                qDebug() << "Invalid format in friendlist.txt";
                continue;
            }
            int userID = parts[0].toInt();
            QString username = parts[1];
            User* friendUser = new User(userID, username);
            currentUser->addFriend(friendUser);
        }
    }
    file.close();
}

void app::ReadUserPosts() {
    QFile file("userPosts.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "sowie Unable to open file.";
        return;
    }

    QTextStream in(&file);
    QString line;
    while (!in.atEnd()) {
        line = in.readLine().trimmed();
        if (line.isEmpty()) {
            continue; // Skip empotty lines
        }
        QString username = line;
        while (!in.atEnd()) {
            line = in.readLine().trimmed();
            if (line == "-1") {
                break;
            }
            if (username != currentUser->getName()) {
                while (line != "-1" && !in.atEnd()) {
                    line = in.readLine().trimmed();
                }
                break;
            }
            if (line == "-2") {
                continue;
            }
            int postId = line.toInt();
            QString description = in.readLine().trimmed();
            if (description.endsWith('!')) {
                description.chop(1);
            }
            QStringList dateTime = in.readLine().trimmed().split(' ', Qt::SkipEmptyParts);
            if (dateTime.size() == 6) {
                Date sharedDate(dateTime[0].toInt(), dateTime[1].toInt(), dateTime[2].toInt(),
                                dateTime[3].toInt(), dateTime[4].toInt(), dateTime[5].toInt());

                Post* newPost = new Post(postId, description.toStdString(), currentUser, sharedDate);
                currentUser->addToTimeline(newPost);
            } else {

                continue;
            }
        }
    }
    file.close();

}

void app::ReadFriendPosts() {

    User** friends = currentUser->getFriendlist();
    User* user1 = friends[0];
    User* user2 = friends[1];
    User* user3 = friends[2];

    QDateTime now = QDateTime::currentDateTime();

    int year = now.date().year();
    int month = now.date().month();
    int day = now.date().day();
    int hour = now.time().hour();
    int minute = now.time().minute();
    int second = now.time().second();

    Date Date1(day, month, year, hour+2, minute, second+2);
    Date Date2(day, month, year, hour, minute+7, second);
    Date Date3(day, month, year, hour+2, minute, second+1);

    AllPosts[0] = new Post(10, "Today is a bright Sunny Day.", user1, Date1);
    AllPosts[1] = new Post(11, "First Day at University was fun.", user2,Date2);
    AllPosts[2]= new Post(12, "Can't wait to start a new life.", user3,Date3);

    user2->likePost(AllPosts[0]);
    user3->likePost(AllPosts[0]);
    user3->AddComment(AllPosts[0], "Truly, Today is very hot.");
    user2->AddComment(AllPosts[0], "beautiful day.....");
    user2->AddComment(AllPosts[0], "Don't forget to hydrate.");

    user1->likePost(AllPosts[1]);
    user3->likePost(AllPosts[1]);
    user1->AddComment(AllPosts[1], "Amazing...");
    user3->AddComment(AllPosts[1], "Wait for it. lol ");
    user3->AddComment(AllPosts[1], "you''ll see the real fun soon");

    user1->likePost(AllPosts[2]);
    user2->likePost(AllPosts[2]);
    user1->AddComment(AllPosts[2], "Thats so cool!");
    user1->AddComment(AllPosts[2], "So lucky you are.");
    user2->AddComment(AllPosts[2], "Enjoy...hope to meet you soon.");

}
Post** app:: getAllPosts(){
    return AllPosts;
}
Page** app:: getAllPages(){
    return AllPages;
}

void app::ReadPages() {

    User* Hashir = new User(1, "Hashir");
    User* Ahsan = new User(2, "Ahsan");
    User* Mahnoor = new User(3, "Mahnoor");

    Page* page1 = new Page(1, "Food Fusion", Hashir);
    Page* page2 = new Page(2, "Galaxy Lollywood", Ahsan);
    Page* page3 = new Page(3, "Vogue", Mahnoor);

    currentUser->likePage(page1);
    currentUser->likePage(page2);
    currentUser->likePage(page3);

    Post* post1_hashir = new Post(13, "Here is the recipe for a perfect Sindhi Biryani", Hashir, Date(1, 1, 2024, 10, 0, 0));
    Post* post2_hashir = new Post(14, "Today we are baking chocolate fudge brownies. ", Hashir, Date(2, 1, 2024, 11, 0, 0));
    Post* post1_ahsan = new Post(15, "Let's see what's the latest gossip in town..", Ahsan, Date(3, 1, 2024, 12, 0, 0));
    Post* post2_ahsan = new Post(16, "Hailey and Justin are having a baby!!!!", Ahsan, Date(4, 1, 2024, 13, 0, 0));
    Post* post1_mahnoor = new Post(17, "Here are some latest fashion trends you should try.", Mahnoor, Date(5, 1, 2024, 14, 0, 0));
    Post* post2_mahnoor = new Post(18, "Question of the day: Should skinny jeans be banned?", Mahnoor, Date(6, 1, 2024, 15, 0, 0));


    page1->addPost(post1_hashir);
    page1->addPost(post2_hashir);
    page2->addPost(post1_ahsan);
    page2->addPost(post2_ahsan);
    page3->addPost(post1_mahnoor);
    page3->addPost(post2_mahnoor);

    currentUser->likePage(page1);
    currentUser->likePage(page2);
    currentUser->likePage(page3);

    Hashir->likePost(post1_ahsan);
    Hashir->likePost(post2_ahsan);
    Hashir->likePost(post1_mahnoor);
    Hashir->likePost(post2_mahnoor);

    Ahsan->likePost(post1_hashir);
    Ahsan->likePost(post2_hashir);
    Ahsan->likePost(post1_mahnoor);
    Ahsan->likePost(post2_mahnoor);

    Mahnoor->likePost(post1_hashir);
    Mahnoor->likePost(post2_hashir);
    Mahnoor->likePost(post1_ahsan);
    Mahnoor->likePost(post2_ahsan);

    Hashir->AddComment(post1_ahsan, "OMG! What's the tea...");
    Hashir->AddComment(post2_ahsan, "Baby beiber coming soon yay.");

    Ahsan->AddComment(post1_hashir, "Thanks for sharing! I'll definitely give it a try.");
    Ahsan->AddComment(post2_hashir, "They look so yummy.. I am already craving!");

    Mahnoor->AddComment(post1_hashir, "Yum! I love Sindhi Biryani.");
    Mahnoor->AddComment(post2_hashir, "I'm drooling over those brownies!");

    Mahnoor->AddComment(post1_ahsan, "That's so weird... can't beleive the news.");
    Mahnoor->AddComment(post2_ahsan, "We need to address more serious issues....");

    Hashir->AddComment(post1_mahnoor, "These outfits are so cool..");
    Hashir->AddComment(post2_mahnoor, "Yessss...please");

    Ahsan->AddComment(post1_mahnoor, "These colors are too bright for my pallete.");
    Ahsan->AddComment(post2_mahnoor, "#cancelskinnyjeans");
    AllPosts[3]=post1_hashir;
    AllPosts[4]=post2_hashir;
    AllPosts[5]=post1_ahsan;
    AllPosts[6]=post2_ahsan;
    AllPosts[7]=post1_mahnoor;
    AllPosts[8]=post2_mahnoor;

    AllPages[0]=page1;
    AllPages[1]=page2;
    AllPages[2]=page3;
}

