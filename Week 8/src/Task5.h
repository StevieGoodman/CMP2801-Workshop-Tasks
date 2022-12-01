#ifndef WEEK_8_TASK5_H
#define WEEK_8_TASK5_H

using namespace std;
#include <iostream>

class Task5 {
public:
    // Runs task 5 code
    void static run();

    // Completely pointless container for integer value
    class A {
    public:
        // Instantiates A object using an integer value
        A(int v): value(v) {}
        // Getter for A.value
        int getValue();
        // Prints out A.value
        void print();
        // Increments A.value
        A operator++(int);
    private:
        int value;
    };
};

#endif //WEEK_8_TASK5_H