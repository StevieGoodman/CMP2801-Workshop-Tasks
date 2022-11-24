#include "Task3.h"

using namespace std;
#include <iostream>

void Task3::run() {
    A a1 = A(2);
    A a2 = A(3);
    a1.print();
    a2.print();
    A a3 = add(a1, a2);
    a3.print();
}

int Task3::A::getValue() { return this->value; }

void Task3::A::print() { cout << "My value is " << value << endl; }

Task3::A Task3::add(A a1, A a2) { return A(a1.getValue() + a2.getValue()); }