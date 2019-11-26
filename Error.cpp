#include "Error.h"

#include <utility>

Error::Error(std::string message) : message(std::move(message)) {}

std::string Error::getMessage() {
    return message;
}

