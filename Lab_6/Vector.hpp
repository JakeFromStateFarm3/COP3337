#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);
    ~Vector();

    void push_back(int val);
    void print() const;

    bool full() const;
    int at(int index) const;
    int getSize() const;
    int getCapacity() const;
    void clear();
    void push_front(int val);
    void insert(int pos, int val);

private:
    int* data; // Array of integers
    int size; // The current number of elements
    int capacity; // The max number of elements vector can hold
};

#endif