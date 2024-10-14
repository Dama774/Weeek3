#include "count_occurrences.h"

int countOccurrences(const std::string& searchStr, const std::string data_array[], int n) {
    int count = 0;

    for (int i = 0; i < n; ++i) {
        std::string::size_type pos = data_array[i].find(searchStr);
        while (pos != std::string::npos) {
            ++count;
            pos = data_array[i].find(searchStr, pos + 1);
        }
    }

    return count;
}

