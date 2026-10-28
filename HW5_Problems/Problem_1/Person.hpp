#include <iostream>
#include <string>
#include <vector>
#include <cstring>

class Person{
private:
    int age;
    char* name;
public:
    Person(const char* name, int age);
};