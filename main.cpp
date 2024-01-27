

#include <iostream>
#include <vector>
#include <algorithm>
#include "Mailbox.h"
using namespace std;
//In order to display the MailBox's vector in the main,
// a global function template Show should be created that
// takes a reference to a const vector's object.
template <typename T>
void Show(const std::vector<T>& vec) {
    for (const auto& v : vec) {
        std::cout << v << std::endl;
    }
}

int main() {
    //In the main, create a MailBox's object with 3 vector's elements
    // by default, fill in it with 5 Email's messages and test it.
    MailBox mailbox;
    std::vector<Email>& emails = mailbox.getEmails();
    emails.push_back(Email("John Doe", "2022-01-01", "Meeting tomorrow"));
emails.push_back(Email("Jane Doe", "2022-02-01", "Important email"));
emails.push_back(Email("Jane Doe", "2022-03-01", "Follow up"));
emails.push_back(Email("John Doe", "2022-04-01", "Reminder"));

//display the emails
cout << "Original emails: " << endl;
Show(emails);

cout << "\nSorted by who, then by date, then by subject: " << endl;
 mailbox.SortWho();
 Show(emails);

cout << "\nSorted by date, then by who, then by subject: " << endl;
 mailbox.SortDate();
 Show(emails);

cout << "\nSorted by subject, then by who, then by date: " << endl;
 mailbox.SortSubject();
 Show(emails);

return 0;
}