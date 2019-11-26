#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H

#include <string>

using namespace std;
/**
 * Medium - class
 */
class Medium {
    string abbreviation;
    string author;
    string title;
    int yearOfPublication;

public:
/**
 * Constructor
 * @param abbreviation
 * @param author
 * @param title
 * @param yearOfPublication
 */
    Medium(string &abbreviation, string &author, string &title, int yearOfPublication);

/**
 * Getters and setters
 */
    string getAbbreviation();

    void setAbbreviation(string &abbreviation);

    string &getAuthor();

    void setAuthor(string &author);

    string &getTitle();

    void setTitle(string &title);

    void setYearOfPublication(int &yearOfPublication);

    int getYearOfPublication() const;

    /**
     * toString - method
     * @return a string representation of the entity
     */
    virtual std::string toString() const;

};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H
