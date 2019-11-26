#include "Book.h"

Book::Book( string abbreviation,  string author,  string title, int yearOfPublication,
            string publisher)
        : Medium(abbreviation, author, title, yearOfPublication) {
    this->publisher = publisher;
}

const string &Book::getPublisher() const {
    return publisher;
}

void Book::setPublisher(const string &publisher) {
    Book::publisher = publisher;
}

string Book::toString() const {
    return Medium::toString() + ". "
           + getPublisher() + ", "
           + to_string(getYearOfPublication()) + ".";
}