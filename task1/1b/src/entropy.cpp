#include "entropy.h"
#include <cmath>

double calculateEntropy(const std::string& input) {
    const int ASCII_SIZE = 256;
    double frequency[ASCII_SIZE] = {0};
    double entropy = 0.0;
    int totalCharacters = 0;

    // Подсчет частоты каждого символа
    for (char ch : input) {
        frequency[(unsigned char)ch]++;
        totalCharacters++;
    }

    // Расчет энтропии
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (frequency[i] > 0) {
            double probability = frequency[i] / totalCharacters;
            entropy -= probability * log2(probability);
        }
    }

    return entropy;
}

