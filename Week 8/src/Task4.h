#ifndef WEEK_8_TASK4_H
#define WEEK_8_TASK4_H

using namespace std;
#include <iostream>

class Task4 {
public:
    void static run();

    class A {
    public:
        A(int v): value(v) {}
        int getValue();
        void print();
        int operator+(A* other);
    private:
        int value;
    };
};

#endif //WEEK_8_TASK4_H
