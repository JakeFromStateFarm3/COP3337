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
        capacity *= 2;
        int* newData = new int[capacity];
        for(int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
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

void Vector::push_front(int val) {
    if (size == capacity){
        capacity *= 2;
        int* newData = new int[capacity];
        for(int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }
    for (int i = size; i > 0; i-- ){
        data[i] = data[i - 1];
    }
    data[0] = val;
    size++;
}