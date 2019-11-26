#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BIBLIOGRAPHY_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BIBLIOGRAPHY_H

#include <vector>
#include "Medium.h"

class Bibliography {
    int size;
    int capacity;
    Medium **mediums/* = new Medium *[size]*/; //TODO p 6.33
public:
    Bibliography(int size);

    void insert(Medium *medium);

    /*const*/ Medium *operator[](const string &abbreviation) const;

    friend std::ostream &operator<<(std::ostream &os, const Bibliography &bibligraphy);

};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BIBLIOGRAPHY_H
