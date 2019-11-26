#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H

#include <string>

class Error {
    std::string message;
public:
    Error(std::string message);
    std::string getMessage();
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H
