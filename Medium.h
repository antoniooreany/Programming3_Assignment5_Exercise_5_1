#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H

#include <string>

using namespace std;

class Medium {

    string abbreviation;
    string author;
    string title;
    int yearOfPublication;

public:

    Medium(string &abbreviation, string &author, string &title, int yearOfPublication);

    string getAbbreviation();

    void setAbbreviation(string &abbreviation);

    string &getAuthor();

    void setAuthor(string &author);

    string &getTitle();

    void setTitle(string &title);

    void setYearOfPublication(int &yearOfPublication);

    int getYearOfPublication() const;

    virtual std::string toString() const;

//    int getYearOfPublication();
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H
