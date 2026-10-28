#include "Person.hpp"


Person::Person(const char* name, int age){
    this -> age = age;
    if (name != nullptr){
        this -> name = new  char[std::strlen(name) + 1];
        std::strcpy(this->name, name);
    }
    else{
    this -> name = nullptr;
    }
}

Person::Person(const Person& other){
    this -> age = other.age;
    if (other.name != nullptr){
        this -> name = new  char[std::strlen(other.name) + 1];
        std::strcpy(this->name, other.name);
    }
    else{
    this -> name = nullptr;
    }
}