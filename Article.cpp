#include "Article.h"

Article::Article(string abbreviation, string author, string title, int yearOfPublication,
                 string magazineName, int magazineNumber, int pageNumber)
        : Medium(abbreviation, author, title, yearOfPublication) {
    this->magazineName = magazineName;
    this->magazineNumber = magazineNumber;
    this->pageNumber = pageNumber;
}

const string &Article::getMagazineName() const {
    return magazineName;
}

void Article::setMagazineName(const string &magazineName) {
    Article::magazineName = magazineName;
}

const int &Article::getMagazineNumber() const {
    return magazineNumber;
}

void Article::setMagazineNumber(int magazinNumber) {
    Article::magazineNumber = magazinNumber;
}

const int &Article::getPageNumber() const {
    return pageNumber;
}

void Article::setPageNumber(int pageNumber) {
    Article::pageNumber = pageNumber;
}

string Article::toString() const {
    return Medium::toString() + ". "
           + getMagazineName() + ", "
           + to_string(getMagazineNumber()) + ", "
           + to_string(getYearOfPublication()) + ", "
           + to_string(getPageNumber()) + ".";
}
