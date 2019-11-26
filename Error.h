//
// Created by User on 26.11.2019.
//

#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H


#include <string>

class Error {
    std::string message;
public:
    Error(const std::string &message);
    std::string getMessage();
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H
