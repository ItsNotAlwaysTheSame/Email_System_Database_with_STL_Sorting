


#include "Mailbox.h"


//each of them sorts the vector by calling the STL sort algorithm with 
//a corresponding binary predicate - a function object of class CompWhoDateSubject, etc.
void MailBox:: SortWho() {
        std::sort(emails.begin(), emails.end(), CompWhoDateSubject());
    }
void  MailBox::SortDate() {
        std::sort(emails.begin(), emails.end(), CompDateWhoSubject());
    }

void  MailBox::SortSubject() {
        std::sort(emails.begin(), emails.end(), CompSubjectWhoDate());
    }


    