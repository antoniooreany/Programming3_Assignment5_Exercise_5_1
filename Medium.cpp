#include "Medium.h"

Medium::Medium(const string &abbreviation, const string &author, const string &title, int yearOfPublication)
        : abbreviation(abbreviation), author(author), title(title), yearOfPublication(yearOfPublication) {}

const string Medium::getAbbreviation() const {
    return abbreviation;
}

void Medium::setAbbreviation(const string &abbreviation) {
    Medium::abbreviation = abbreviation;
}

const string &Medium::getAuthor() const {
    return author;
}

void Medium::setAuthor(const string &author) {
    Medium::author = author;
}

const string &Medium::getTitle() const {
    return title;
}

void Medium::setTitle(const string &title) {
    Medium::title = title;
}

const int Medium::getYearOfPublication() const {
    return yearOfPublication;
}

void Medium::setYearOfPublication(const int &yearOfPublication) {
    Medium::yearOfPublication = yearOfPublication;
}

std::string Medium::toString() const {
    return "[" + abbreviation + "]" + author + ": " + title;
}
