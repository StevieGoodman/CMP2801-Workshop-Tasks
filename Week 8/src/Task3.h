#ifndef WEEK_8_TASK3_H
#define WEEK_8_TASK3_H

using namespace std;
#include <iostream>

class Task3 {
public:
    void static run();

    class A {
    public:
        A(int v): value(v) {}
        int getValue();
        void print();
    private:
        int value;
    };

    A static add(A a1, A a2);
};

#endif //WEEK_8_TASK3_H