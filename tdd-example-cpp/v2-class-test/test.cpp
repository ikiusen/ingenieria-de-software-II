#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <TextNormalizer.h>

TEST_CASE("TextNormalizer", "TextNormalizer.FirstLetterUpper")
{
    TextNormalizer tn;
    std::string name = "thiago";
    REQUIRE(tn.firstLetterUpper(name) == "Thiago");
}