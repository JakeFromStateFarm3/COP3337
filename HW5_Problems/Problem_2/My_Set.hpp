#include <iostream>
#include <string>
#include <vector>

class My_Set{
private:
    unsigned int range;
    int size;
    bool* set;
public:
    My_Set(unsigned max);
    My_Set(const My_Set& other);
    ~My_Set();
    void insertElement(int k);
    void deleteElement(int k);
    void printSet();
};