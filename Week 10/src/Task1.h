#ifndef WEEK_10_TASK1_H
#define WEEK_10_TASK1_H

using namespace std;
#include <iostream>

namespace Task1 {
    class A {
    public:
        virtual ~A();
    };

    class B : public A {
    public:
        virtual ~B();
    };

    class C : public B {
    public:
        ~C() override;
    };
    
    /// Checks that 
    void run();
    
}

#endif //WEEK_10_TASK1_H