using namespace std;
#include "iostream"
#include "Task1.h"
using namespace Task1;

void Task1::run() {
    A a = A(42);
    B b = B(20.21);
//    C c = C(“test”);
//    A *pC = &c;
    cout << a.get_value() << endl;
    a.print();
    b.print();
//    pC->print();
}

template<typename T>
A<T>::A(T value) {
    this->value = value;
}

template<typename T>
void A<T>::print() {
    cout << "Class name: A" << endl;
}

template<typename T>
T A<T>::get_value() {
    return this->value;
}

template<typename T>
void B<T>::print() {
    cout << "Class name: B" << endl;
}