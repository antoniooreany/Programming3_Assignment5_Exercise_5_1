#ifndef PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H
#define PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H

#include <string>
/**
 * Error - class
 */
class Error {
    std::string message;
public:
    explicit Error(std::string message);
    std::string getMessage();
};


#endif //PROGRAMMING3_ASSIGNMENT5_EXERCISE_5_1_ERROR_H
