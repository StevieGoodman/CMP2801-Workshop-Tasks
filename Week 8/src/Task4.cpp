#include "Task4.h"

using namespace std;
#include <iostream>

void Task4::run() {
    A a1 = A(2);
    A a2 = A(3);
    a1.print();
    a2.print();
    A a3 = a1 + a2;
    a3.print();
}

int Task4::A::getValue() { return this->value; }

int Task4::A::operator+(A* other) { 
    return this->getValue() + other->getValue();
}

void Task4::A::print() { cout << "My value is " << value << endl; }