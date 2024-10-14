#include "SensorData.h"
#include <sstream>
#include <iostream>
#include <iomanip>

void SensorManager::updateSensorData(int id, double temperature) {
    for (int i = 0; i < sensorCount; ++i) {
        if (sensors[i].id == id) {
            sensors[i].sum += temperature;
            sensors[i].count++;
            return;
        }
    }

    // Если не найден, добавляем новый датчик
    if (sensorCount < MAX_SENSORS) {
        sensors[sensorCount++] = {id, temperature, 1};
    }
}

void SensorManager::calculateAverageTemperatures(const std::string& input) {
    std::istringstream stream(input);
    std::string token;

    while (std::getline(stream, token, '@')) {
        if (token.length() < 3) {
            continue; // Пропускаем некорректные данные
        }

        int id = std::stoi(token.substr(0, 2)); // Извлекаем двузначный ID
        double temperature = std::stod(token.substr(2)); // Получаем температуру

        updateSensorData(id, temperature);
    }
}

void SensorManager::sortSensors(int choice) {
    for (int i = 0; i < sensorCount - 1; ++i) {
        for (int j = i + 1; j < sensorCount; ++j) {
            bool condition = (choice == 1) ? (sensors[i].id > sensors[j].id)
                                            : (sensors[i].average() > sensors[j].average());
            if (condition) {
                std::swap(sensors[i], sensors[j]);
            }
        }
    }
}

void SensorManager::printSensors() const {
    for (int i = 0; i < sensorCount; ++i) {
        std::cout << sensors[i].id << " " << std::fixed << std::setprecision(1) << sensors[i].average() << std::endl;
    }
}
