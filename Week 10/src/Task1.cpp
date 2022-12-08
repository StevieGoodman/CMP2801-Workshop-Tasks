#include "Task1.h"

void Task1::run() {
    {
        A *a = new C;
        delete a;
    }
}

Task1::A::~A() {
    cout << "A destructor" << endl;
}

Task1::B::~B() {
    cout << "B destructor" << endl;
}

Task1::C::~C() {
    cout << "C destructor" << endl;
}