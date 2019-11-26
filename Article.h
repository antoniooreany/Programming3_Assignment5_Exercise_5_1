#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ARTICLE_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ARTICLE_H

#include "Medium.h"
    /**
     * Article - class
     */
class Article : public Medium {
    /**
     * fields
     */
    string magazineName;
    int magazineNumber;
    int pageNumber;

public:
    /**
     * Constructor
     * @param abbreviation
     * @param author
     * @param title
     * @param yearOfPublication
     * @param magazineName
     * @param magazineNumber
     * @param pageNumber
     */
    Article(string abbreviation, string author, string title, int yearOfPublication, string magazineName,
            int magazineNumber, int pageNumber);

    /**
    * Getters and setters
    */
    const string &getMagazineName() const;

    void setMagazineName(const string &magazineName);

    const int &getMagazineNumber() const;

    void setMagazineNumber(int magazinNumber);

    const int &getPageNumber() const;

    void setPageNumber(int pageNumber);

    /**
     * toString - method
     * @return a string representation of the entity
     */
    virtual string toString() const;
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ARTICLE_H
