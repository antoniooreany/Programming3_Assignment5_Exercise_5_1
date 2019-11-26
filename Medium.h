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
    Medium(const string &abbreviation, const string &author, const string &title, int yearOfPublication);

    const string getAbbreviation() const;

    void setAbbreviation(const string &abbreviation);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    const string &getTitle() const;

    void setTitle(const string &title);

    void setYearOfPublication(const int &yearOfPublication);

    const int getYearOfPublication() const;

    virtual std::string toString() const;
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_MEDIUM_H
