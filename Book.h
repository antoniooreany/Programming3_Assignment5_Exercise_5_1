#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BOOK_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BOOK_H


#include "Medium.h"

class Book : public Medium {
    string publisher;

public:
    Book(const string &abbreviation, const string &author, const string &title, int yearOfPublication, const string &publisher);

    const string &getPublisher() const;

    void setPublisher(const string &publisher);

    virtual string toString() const;
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BOOK_H
