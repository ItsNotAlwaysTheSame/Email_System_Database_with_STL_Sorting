#ifndef MAILBOX_H
#define MAILBOX_H
#include <iostream>
#include <vector>
#include <string>
#include "Email.h"
#include <algorithm>



class MailBox {//a class MailBox must be defined, it should
//include as a private data member the STL vector container of type Email.
private:
    std::vector<Email> emails;

public:
//The MailBox's combined constructor must initialize its member,
// calling vector's parameterized constructor of 1st type that produces
//a sequence of n elements. An access function enabling both vector's 
//reading and writing should also be defined.
    MailBox(int n = 3) : emails(n) {}
    std::vector<Email>& getEmails() { return emails; }
//The class MailBox must also contain three member functions - SortWho, SortDate, and SortSubject
    void SortWho();

    void SortDate();

    void SortSubject();
};

#endif