#include <iostream>
#include "Bibliography.h"
//#include <coherence/lang/NoSuchElementException.hpp>

Bibliography::Bibliography(int size) {
    capacity = 0;
    this->size = size;
    mediums = new Medium *[size];
}

void Bibliography::insert(Medium *medium) {
    //TODO Pay attention to meaningful error handling!
    if (capacity < size) {
//        if(mediums == nullptr)
        mediums[capacity] = medium;
        capacity++;
//    } else throw std::exception();    //TODO    throw out_of_rangeException;
    } else cerr << "out_of_range Error";    //TODO    throw out_of_rangeException;
}

/*const*/ Medium *Bibliography::operator[](const string &abbreviation) const {
    for (int index = 0; index < capacity; index++) {
        if (mediums[index]->getAbbreviation() == abbreviation)
            return mediums[index];
    }
    return nullptr;
}

std::ostream &operator<<(std::ostream &os, const Bibliography &bibliography) {
    for (int index = 0; index < bibliography.size; ++index) {
        if (bibliography.mediums[index] != nullptr) {
            os << bibliography.mediums[index]->toString();
        }
        os << endl;
    }
    return os;
}




