#include <fstream>
#include <Person.h>
#include "../vendors/nlohmann/json.hpp"
using json = nlohmann::json;

int main()
{
    std::ifstream inputFile("person.json");
    json inputData = json::parse(inputFile);
    Person p1(inputData.value("_name", "not found"), inputData.value("_surname", "not found"));
    std::cout << inputData;

    Person p("José", "Cabrera");
    json data = p;
    std::ofstream file;
    file.open("person.json");
    file << std::setw(4) << data;
    file.close();

    return 0;
}