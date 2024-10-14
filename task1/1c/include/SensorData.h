#ifndef SENSORDATA_H
#define SENSORDATA_H

#include <string>

const int MAX_SENSORS = 100; // Максимальное количество датчиков
const size_t MAX_INPUT_LENGTH = 512; // Максимальная длина строки

struct SensorData {
    int id;    
    double sum;
    int count;

    double average() const {
        return sum / count;
    }
};

class SensorManager {
public:
    void calculateAverageTemperatures(const std::string& input);
    void sortSensors(int choice);
    void printSensors() const;

private:
    SensorData sensors[MAX_SENSORS];
    int sensorCount = 0;

    void updateSensorData(int id, double temperature);
};

#endif // SENSORDATA_H

