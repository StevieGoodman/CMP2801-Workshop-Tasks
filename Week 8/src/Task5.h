#ifndef WEEK_8_TASK5_H
#define WEEK_8_TASK5_H

using namespace std;
#include <iostream>

class Task5 {
public:
    void static run();

    class A {
    public:
        A(int v): value(v) {}
        int getValue();
        void print();
        A operator++(int);
    private:
        int value;
    };
};

#endif //WEEK_8_TASK5_H