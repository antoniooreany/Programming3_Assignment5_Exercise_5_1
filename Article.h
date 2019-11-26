#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ARTICLE_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ARTICLE_H

#include "Medium.h"

class Article : public Medium {
    string magazineName;
    int magazineNumber;
    int pageNumber;

public:
    Article(const string &abbreviation, const string &author, const string &title, int yearOfPublication, const string &magazineName, int magazineNumber, int pageNumber);

    const string &getMagazineName() const;

    void setMagazineName(const string &magazineName);

    const int & getMagazineNumber() const;

    void setMagazineNumber(int magazinNumber);

    const int & getPageNumber() const;

    void setPageNumber(int pageNumber);

    virtual string toString() const;
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ARTICLE_H
