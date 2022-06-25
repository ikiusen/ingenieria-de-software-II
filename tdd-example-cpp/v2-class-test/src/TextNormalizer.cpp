#include <TextNormalizer.h>

TextNormalizer::TextNormalizer(){
}

TextNormalizer::~TextNormalizer(){
}

std::string TextNormalizer::firstLetterUpper(std::string name) {
    std::string result;
    result = name;
    result[0] = std::toupper(result[0]);
    return result;
}