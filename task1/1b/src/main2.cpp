#include <iostream>
#include <string>
#include <iomanip>
#include "entropy.h"

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    double entropy = calculateEntropy(input);
    
    // Вывод результата с двумя знаками после запятой
    std::cout << std::fixed << std::setprecision(2) << entropy << std::endl;

    return 0;
}

