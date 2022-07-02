#include <TextNormalizer.h>

TextNormalizer::TextNormalizer(){
}

TextNormalizer::~TextNormalizer(){
}

std::string TextNormalizer::firstLetterUpper(std::string name) {
    bool isSeparator = true;
    for (long unsigned int i = 0; i <= name.length(); i++)
    {
        if (std::isalpha(name[i]) && isSeparator == true)
        {
            name[i] = std::toupper(name[i]);
            isSeparator = false;
        }
        else if (name[i] == '_')
        {
            isSeparator = true;
        }
    }
    return name;
}