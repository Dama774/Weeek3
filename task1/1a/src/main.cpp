#include <iostream>
#include <string>
#include "count_occurrences.h"

int main() {
    std::string searchStr;
    const int N = 3; // Количество строк, в которых будем искать
    std::string data_array[N];

    // Ввод строки для поиска
    std::cout << "Что ищем: ";
    std::getline(std::cin, searchStr);

    // Ввод строк, где будем искать
    std::cout << "Где ищем:n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Строка " << (i + 1) << ": ";
        std::getline(std::cin, data_array[i]);
    }

    // Подсчет вхождений
    int totalCount = countOccurrences(searchStr, data_array, N);
    
    // Вывод результата
    std::cout << "Количество вхождений: " << totalCount << std::endl;

    return 0;
}

