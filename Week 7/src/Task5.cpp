#include "Task5.h"

using namespace std;
#include <string>
#include <iostream>

// Task5 class
void Task5::run() {
    A *a1 = new Task5::A("a");
    a1->set_name("IamA");
    A a2 = *a1;
    delete a1;
    a2.print_name();
}

// Task5::A class
Task5::A::A(string name) {
    this->set_name(name);
}
void Task5::A::set_name(std::string new_name) {
    this->_name = new_name;
}
void Task5::A::print_name() {
    cout << this->_name << endl;
}