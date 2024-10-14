#include <iostream>
#include <iomanip>
#include "SensorData.h"

int main() {
    std::string input;
    std::cout << "Введите показания датчиков: ";
    std::getline(std::cin, input);

    // Проверка длины входной строки
    if (input.length() > MAX_INPUT_LENGTH) {
        std::cerr << "Ошибка: Длина строки превышает максимальное значение в " 
                  << MAX_INPUT_LENGTH << " символов." << std::endl;
        return 1; // Завершение программы с ошибкой
    }

    SensorManager manager;
    manager.calculateAverageTemperatures(input);

    std::cout << "По какому полю сортировать? (1 - по ID, 2 - по средней температуре): ";
    int choice;
    std::cin >> choice;

    manager.sortSensors(choice);
    manager.printSensors();

    return 0;
}

