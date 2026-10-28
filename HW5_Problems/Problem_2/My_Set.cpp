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
    if (!(k < 0 || k <= range)){
        set[k] = true;
    }
    else{
        std::cout << "Warning: Number " << k << " is out of the set range [0, " << range << "]." << std::endl;
    }
}