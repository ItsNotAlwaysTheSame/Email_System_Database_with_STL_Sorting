#ifndef EMAIL_H
#define EMAIL_H
#include <iostream>
#include <string>
class Email {//First of all, class Email must be developed to keep
// information about a received letter: sender's name ("who"), 
//date of receiving ("date"), and a "subject". 
//These data members should be of type string. 
public:
    std::string who;
    std::string date;
    std::string subject;

    Email():who(), date(), subject(){};
    Email(std::string who, std::string date, std::string subject); //Class Email should contain a combined constructor,
    //overloaded friend operator <<
    friend std::ostream& operator<<(std::ostream& os, const Email& email);
};
//as well as three friend function-like classes (structures): CompWhoDateSubject,CompSubjectWheDate
struct CompWhoDateSubject {
    bool operator()(const Email& lhs, const Email& rhs) const;
};
// CompDateWhoSubject, 
struct CompDateWhoSubject {
    bool operator()(const Email& lhs, const Email& rhs) const ;
};
//CompSubjectWheDate
struct CompSubjectWhoDate {
    bool operator()(const Email& lhs, const Email& rhs) const;
};
//Each of these classes has only one member function - overloaded function call operator () returning a bool value.

#endif