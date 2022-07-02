#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <TextNormalizer.h>

TEST_CASE("TextNormalizer", "TextNormalizer.FirstLetterUpper")
{
    TextNormalizer tn;
    std::string name = "thiago";
    REQUIRE(tn.firstLetterUpper(name) == "Thiago");
}

TEST_CASE("FirstLetterUpper II", "FirstLetterUpper II")
{
    TextNormalizer tn;
    std::string name = "thiago_cabrera_bosco";
    REQUIRE(tn.firstLetterUpper(name) == "Thiago_Cabrera_Bosco");
}

TEST_CASE("FirstLetterUpper III", "FirstLetterUpper III")
{
    TextNormalizer tn;
    std::string name = "thiago_cabrera_";
    REQUIRE(tn.firstLetterUpper(name)  == "Thiago_Cabrera_");
}