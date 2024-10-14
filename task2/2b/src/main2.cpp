#include <iostream>
#include <string>
#include "ipv6_validator.h"

int main() {
    std::string ip;

    std::cout << "Введите адрес IPv6 (полная форма): ";
    std::getline(std::cin, ip);

    if (isValidIPv6(ip)) {
        std::cout << "Адрес IPv6 "" << ip << "" является корректным." << std::endl;
    } else {
        std::cout << "Адрес IPv6 "" << ip << "" является некорректным." << std::endl;
    }

    return 0;
}

