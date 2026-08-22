#include <iostream>

namespace Student {
    int id;
    void input() {
        std::cout << "Enter the Student ID: ";
        std::cin >> id;
    }
    void print() {
        std::cout << "\n--- Registration Information ---\n";
        std::cout << "Student ID: " << id <<std::endl;
    }
}
namespace Course {
    int id;
    void input() {
        std::cout << "Enter the Course ID: ";
        std::cin >> id;
    }
    void print() {
        std::cout << "Course ID: " << id <<std::endl;
    }
}
int main(void) {
    Student::input();
    Course::input();
    Student::print();
    Course::print();
}