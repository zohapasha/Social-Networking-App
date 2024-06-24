#ifndef CLASSES_H
#define CLASSES_H

#include <string>
#include <QString>
#include <QDebug>

const int MAX_FRIENDS = 100;
const int MAX_LIKED_PAGES = 100;
const int MAX_TIMELINE_POSTS = 100;
const int MAX_POSTS = 100;
const int MAX_LIKES = 100;
const int MAX_COMMENTS = 100;
const int MAX_USERS = 100;

class User;
class Post;
class Page;
class Comment;

class Date {
public:
    Date(int day, int month, int year, int hour, int minute, int second);
    Date(const Date& other);
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    bool isValidDate() const;
    bool isValidTime() const;

private:
    int m_day;
    int m_month;
    int m_year;
    int m_hour;
    int m_minute;
    int m_second;
};

class User {
public:
    User(int id, QString name);
    ~User();
    int getId();
    QString getName();
    void addFriend(User* user);
    void viewFriendList();
    void likePost(Post* post);
    void AddComment(Post* post, std::string text);
    void shareMemory(Post* post, std::string text);
    void viewTimeline();
    void likePage(Page* page);
    void viewLikedPages();
    void viewComments(Post* post);
    void viewPeopleWhoLiked(Post* post);
    int getnoOfFriends();
    int gettimeLineCount();
    Post** getTimeLine();
    User** getFriendlist();
    void addToTimeline(Post *post);
    bool isLikedPage(Page* page);
    bool isFriend(User* user);
    bool operator==(const User& other) const;
    int getnoOflikedPages();
    Page** getLikedPages();
    bool isAlreadyLiked(Post* post);
    bool hasLikedPage(Page* page) const ;

private:
    int id;
    QString name;
    int noOfFriends;
    int timelineCount;
    Date currentDate;
    User** friends;
    Page** likedPages;
    Post** timeline;
    int noOflikedPages;
};

class Comment {
public:
    Comment(int id, std::string text, User* author);
    ~Comment();
    int getId();
    std::string getText();
    User* getAuthor();

private:
    int id;
    std::string text;
    User* author;
};

class Post {
public:
    Post(int id, std::string description, User* author,Date sharedDate);
    ~Post();
    int getId();
    std::string getDescription();
    User* getAuthor();
    Date getSharedDate();
    void AddLike(User* user);
    User** getLikedBy();
    int getLikeCount();
    void viewPost();
    void AddComment(User* user, Comment* comment);
    Comment** getComments();
    int getCommentCount();
    bool isWithinLast24Hours(Date& currentDate);
    void setActivityType(int type);
    int getActivityType();
    void setActivityValue(std::string value);
    std::string getActivityValue();

private:
    int id;
    std::string description;
    User* author;
    Date sharedDate;
    int numOfLikes;
    User** likes;
    int numOfComments;
    Comment** comments;
    int activityType;
    std::string activityValue;
};
class Memory : public Post {
public:
    Memory(int id, std::string description, User* author, Date sharedDate, Post* originalPost, std::string text);
    ~Memory();
    Post* getOriginalPost();

private:
    Post* originalPost;
    std::string text;
};

class Page {
public:
    Page(int id, std::string title, User* owner);
    ~Page();
    int getId();
    std::string getTitle();
    User* getOwner();
    void addPost(Post* post);
    void viewPage();
    virtual int getNoOfLikes();
    virtual Post** getPosts();
    void incrementLikeCount();
    int getNoOfPosts();


private:
    int id;
    std::string title;
    User* owner;
    Post** posts;
    int numOfPosts;
    int noOflikes;
};

class Activity {
public:
    Activity(int type, QString value);
    ~Activity();
    int getType();
    QString getValue();

private:
    int type;
    QString value;
};
class app {
public:
    app();
    ~app();
    void Run();
    void setCurrentUser(User* user);
    void setUserDetails(const QString& username, const QString& email);
    void ReadUserPosts();
    void ReadPages();
    void ReadFriendList();
    void ReadFriendPosts();
    const int MAX_POSTS=20;
    const int MAX_PAGES=20;
    Post** getAllPosts();
    Page** getAllPages();
    static int postIdcounter;

private:
    User** userFriends;
    int numofUserFriends;
    Post** AllPosts;
    Page** AllPages;
    QString username;
    QString email;
    User* currentUser;
};

#endif // CLASSES_H
