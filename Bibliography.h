#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BIBLIOGRAPHY_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BIBLIOGRAPHY_H

#include <vector>
#include "Medium.h"

class Bibliography {
    int size;
    std::vector<Medium*> mediums; //TODO p 6.33
public:
    Bibliography(int size);

    void insert(Medium *medium);

    Medium *operator[](const string &abbreviation);

    friend std::ostream &operator<<(std::ostream &os, const Bibliography &bibligraphy);

};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_BIBLIOGRAPHY_H
