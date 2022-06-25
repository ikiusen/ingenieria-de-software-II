#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <string>

std::string FirstLetterUpper(std::string name){
    std::string result;
    result = name;
    result[0] = std::toupper(result[0]);
    return result;
}

TEST_CASE("FirstLetterUpper", "FirstLetterUpper")
{
    std::string name = "thiago";
    REQUIRE(FirstLetterUpper(name) == "Thiago");
}