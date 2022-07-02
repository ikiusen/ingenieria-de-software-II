#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <string>

std::string FirstLetterUpper(std::string name)
{
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

TEST_CASE("FirstLetterUpper", "FirstLetterUpper")
{
    std::string name = "thiago_cabrera";
    REQUIRE(FirstLetterUpper(name) == "Thiago_Cabrera");
}

TEST_CASE("FirstLetterUpper II", "FirstLetterUpper II")
{
    std::string name = "thiago_cabrera_bosco";
    REQUIRE(FirstLetterUpper(name) == "Thiago_Cabrera_Bosco");
}

TEST_CASE("FirstLetterUpper III", "FirstLetterUpper III")
{
    std::string name = "thiago_cabrera_";
    REQUIRE(FirstLetterUpper(name) == "Thiago_Cabrera_");
}