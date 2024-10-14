#include "EmailValidator.h"
#include <regex>

bool isValidEmail(const std::string& email) {
    // Регулярное выражение для проверки адреса электронной почты
    const std::regex pattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+.[a-zA-Z]{2,}$)");
    return std::regex_match(email, pattern);
}

