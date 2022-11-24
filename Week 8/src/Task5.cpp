using namespace std;
#include <iostream>
#include "Task5.h"

void Task5::run() {
    A a1 = A(2);
    A a2 = A(3);
    a1.print();
    a2.print();
    A a3 = a1++;
    a3.print();
}

int Task5::A::getValue() { return this->value; }

Task5::A Task5::A::operator++(int) {
    return Task5::A(++value);
}

void Task5::A::print() { cout << "My value is " << value << endl; }