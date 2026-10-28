#include "My_Set.hpp"

My_Set::My_Set(unsigned max){
    range = max;
    size = 0;
    set = new bool[range + 1];
    for (int i = 0; i <= range; i++){
        set[i] = false;
    }
}

My_Set::My_Set(const My_Set& other){
    range = other.range;
    size = other.size;
    set = new bool[range + 1];
    for (int i = 0; i <= range; i++){
        set[i] = other.set[i];
    }
}

My_Set::~My_Set(){
    delete[] set;
}

void My_Set::insertElement(int k){
    if (!(k < 0 || k > range)){
        set[k] = true;
    }
    else{
        std::cout << "Warning: Number " << k << " is out of the set range [0, " << range << "]." << std::endl;
        size++;
    }
}

void My_Set::deleteElement(int k){
    if (!(k < 0 || k > range)){
        set[k] = false;
    }
    else{
        std::cout << "Warning: Number " << k << " is out of the set range [0, " << range << "]." << std::endl;
        size--;
    }
}

void My_Set::printSet(){
    if (set[0]){
        std::cout << "True, ";
    }
    else{
        std::cout << "{---}, ";
    }
    for (int i = 1; i < range; i++){
        if (set[i]) {
            std::cout << "True, ";
        }
        else{
            std::cout << "{---}, ";
        }
    }
    if (set[range]){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "{---}" << std::endl;
    }
}

bool My_Set::isEqualTo(const My_Set& other) const{
    if ((range != other.range) || (size != other.size)){
        return false;
    }
    for (int i = 0; i <= range; i++){
        if (set[i] != other.set[i]){
            return false;
        }
    }
    return true;
}