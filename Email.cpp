


#include "Email.h"


Email::Email(std::string who, std::string date, std::string subject)      : who(who), date(date), subject(subject) {}

 std::ostream& operator<<(std::ostream& os, const Email& email) {
        os << "From: " << email.who << ", Date: " << email.date
           << ", Subject: " << email.subject;
        return os;
    }
//the call of CompWhoDateSubject returns true if a is lhs and b is rhs , i.e., a is less than b.
//A nested if/else structure can be used for the multi-level comparing, or logical operators || and && may be used.
    bool CompWhoDateSubject::operator()(const Email& lhs, const Email& rhs) const {
        if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        } else if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        } else {
            return lhs.subject < rhs.subject;
        }
    }
     
    bool CompDateWhoSubject:: operator()(const Email& lhs, const Email& rhs) const {
        if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        } else if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        } else {
            return lhs.subject < rhs.subject;
        }
    }
    bool CompSubjectWhoDate::operator()(const Email& lhs, const Email& rhs) const {
        
        
        if (lhs.subject != rhs.subject) {
            return lhs.subject < rhs.subject;
        } else if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        } else {
            return lhs.date < rhs.date;
        }
    }



