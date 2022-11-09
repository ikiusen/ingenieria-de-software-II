#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "../vendors/nlohmann/json.hpp"
class Person
{
private:
    std::string _name;
    std::string _surname;
public:
    Person(std::string name, std::string surname);
    ~Person();
    void getPersonData();
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Person, _name, _surname);
};



Person::Person(std::string name, std::string surname)
{
    _name = name;
    _surname = surname;
}

Person::~Person()
{
}

void Person::getPersonData()
{
    std::cout << "Name: " + _name +" Surname: " + _surname << std::endl; 
}


#endif