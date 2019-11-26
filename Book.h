#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BOOK_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BOOK_H

#include "Medium.h"

class Book : public Medium {
    /**
     * field
     */
    string publisher;

public:
    Book(string abbreviation, string author, string title, int yearOfPublication, string publisher);

    /**
     * Getter and setter
     */
    const string &getPublisher() const;

    void setPublisher(const string &publisher);

    /**
     * toString - method
     * @return a string representation of the entity
     */
    virtual string toString() const;
};

#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BOOK_H
