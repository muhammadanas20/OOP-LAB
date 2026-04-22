// // Task 2: Smart Notification System
// Description
// Design a notification system used in modern applications like mobile apps or web platforms.

#include <iostream>
#include <string>
using namespace std;


class Notification {
protected:
    string recipient;

public:
    Notification(string recip) : recipient(recip) {}
    
    virtual ~Notification() {}
    
   
    virtual void sendNotification() = 0;
};

// Email notification class
class EmailNotification : public Notification {
private:
    string message;
    string subject;

public:
    EmailNotification(string recip, string subj, string msg) 
        : Notification(recip), subject(subj), message(msg) {}
    
    void sendNotification() override {
        cout << "Email Notification" << endl;
        cout << "To: " << recipient << endl;
        cout << "Subject: " << subject << endl;
        cout << "Message: " << message << endl;
        cout << "Status: Sent Successfully" << endl;
    }
};

// SMS notification class
class SMSNotification : public Notification {
private:
    string message;

public:
    SMSNotification(string recip, string msg) 
        : Notification(recip), message(msg) {}
    
    void sendNotification() override {
        cout << "SMS Notification" << endl;
        cout << "To: " << recipient << endl;
        cout << "Message: " << message << endl;
        cout << "Status: Sent Successfully" << endl;
    }
};

// Push notification class
class PushNotification : public Notification {
private:
    string title;
    string body;

public:
    PushNotification(string recip, string ttl, string bdy) 
        : Notification(recip), title(ttl), body(bdy) {}
    
    void sendNotification() override {
        cout << "Push Notification" << endl;
        cout << "To: " << recipient << endl;
        cout << "Title: " << title << endl;
        cout << "Body: " << body << endl;
        cout << "Status: Sent Successfully" << endl;
    }
};


int main() {
    // Create different notification objects
    EmailNotification email("user@example.com", "Welcome", "Welcome to our platform!");
    cout << endl;
    email.sendNotification();
    
    cout << endl << endl;
    
    SMSNotification sms("03001234567", "Your OTP is 1234");
    sms.sendNotification();
    
    cout << endl << endl;
    
    PushNotification push("user_device_123", "New Message", "You have a new message from John");
    push.sendNotification();
    
    return 0;
}