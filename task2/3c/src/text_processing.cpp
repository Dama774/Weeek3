#include "text_processing.h"
#include <regex>

string fix_repeated_characters(const string& text) {
    regex pattern(R"((\w)\1{2,})");
    return regex_replace(text, pattern, "$1");
}

