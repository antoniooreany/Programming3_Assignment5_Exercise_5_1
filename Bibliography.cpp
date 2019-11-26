#include <iostream>
#include "Bibliography.h"
#include "Error.h"

Bibliography::Bibliography(int size) {
    this->size = size;
    mediums.reserve(size);
}

void Bibliography::insert(Medium *medium) {
    if (mediums.size() < size) mediums.push_back(medium);
    else throw Error("Bibliography is full!!!");
}

Medium *Bibliography::operator[](const string &abbreviation) {
    for (auto &medium : mediums) {
        if (medium->getAbbreviation() == abbreviation) return medium;
    }
    return nullptr;
}

std::ostream &operator<<(std::ostream &os, const Bibliography &bibliography) {
    for (auto medium : bibliography.mediums) {
        os << medium->toString() << endl;
    }
    return os;
}




