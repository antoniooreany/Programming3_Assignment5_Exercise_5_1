#include "Medium.h"

Medium::Medium(string &abbreviation, string &author, string &title, int yearOfPublication)
        : abbreviation(abbreviation), author(author), title(title), yearOfPublication(yearOfPublication) {}

string Medium::getAbbreviation() {
    return abbreviation;
}

void Medium::setAbbreviation(string &abbreviation) {
    Medium::abbreviation = abbreviation;
}

string &Medium::getAuthor() {
    return author;
}

void Medium::setAuthor(string &author) {
    Medium::author = author;
}

string &Medium::getTitle() {
    return title;
}

void Medium::setTitle(string &title) {
    Medium::title = title;
}

int Medium::getYearOfPublication() const {
    return yearOfPublication;
}

void Medium::setYearOfPublication(int &yearOfPublication) {
    Medium::yearOfPublication = yearOfPublication;
}

std::string Medium::toString() const {
    return "[" + abbreviation + "]" + author + ": " + title;
}





