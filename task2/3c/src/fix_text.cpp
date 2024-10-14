#include <iostream>
#include <regex>
#include <string>
#include "text_processing.h"

using namespace std;

int main() {
    string input;

    cout << "Введите текст: ";
    getline(cin, input); 

    string output = fix_repeated_characters(input);

    cout << "Вывод:\n" << output << endl;

    return 0;
}

