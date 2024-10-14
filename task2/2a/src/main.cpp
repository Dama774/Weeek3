#include <iostream>
#include "EmailValidator.h"

int main() {
    std::string email;

    std::cout << "Введите адрес электронной почты: ";
    std::getline(std::cin, email);

    if (isValidEmail(email)) {
        std::cout << "Адрес электронной почты корректен." << std::endl;
    } else {
        std::cout << "Адрес электронной почты некорректен." << std::endl;
    }

    return 0;
}

