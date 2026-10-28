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

Person::~Person(){
    delete[] name;
    name = nullptr; //some weird bug was being thrown when executing so I researched how to fix it and apparently this does it which is why this is here.
}

void Person::display(){
    std::cout << "Age: " << this->age << std::endl;
    if (this->name != nullptr) {
        std::cout << "Name: " << this->name << std::endl;
    }
    else{
        std::cout << "Name: [No Name Provided]" << std::endl;
    }    
}