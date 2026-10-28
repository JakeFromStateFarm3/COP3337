#include "Person.hpp"


Person::Person(const char* name, int age){
    this -> age = age;
    if (name != nullptr){
        this -> name = new  char[std::strlen(name) + 1];
        std::strcpy(this->name, name);
    }
    this -> name = nullptr;
}