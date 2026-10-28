#include "Vector.hpp"
#include <iostream>

Vector::Vector(int cap) : capacity(cap), size(0) {
    // Create a dynamic array
    data = new int[capacity];
}

void Vector::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << "]\n";
}

void Vector::push_back(int val) {
    if (full()) {
        // Double the capacity
        // Allocate a new array with doubled capacity
        // Copy the elements from old array into a new one
        // Deallocate old array
        // Set the data equal to the new array
    }
    data[size] = val;
    size++;
}

Vector::~Vector() {
    if (data) {
        delete [] data;
    }
}

bool Vector::full() const {
    return size == capacity;
}

int Vector::getSize() const{
    return size;
}

int Vector::getCapacity() const{
    return capacity;
}

void Vector::clear() {
    delete[] data;
    size = 0;
    capacity = 10;
    data = new int[capacity];
}