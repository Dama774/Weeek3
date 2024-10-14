#include "ipv6_validator.h"
#include <regex>

bool isValidIPv6(const std::string& ip) {
    // Регулярное выражение для проверки полного адреса IPv6
    const std::regex pattern(R"(([0-9a-fA-F]{1,4}:){7}[0-9a-fA-F]{1,4})");
    return std::regex_match(ip, pattern);
}

