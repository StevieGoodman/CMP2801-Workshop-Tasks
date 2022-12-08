#ifndef WEEK_10_TASK2_H
#define WEEK_10_TASK2_H

using namespace std;
#include <iostream>
#include <vector>
#include <string>

namespace Task2 {
    
    void run();
    
    class A {
    public:
        virtual string name();
        void sayHello();
    };

    class B : public A {
        string name() override;
    };

    class C : public B {
        string name() override;
    };
    
    bool test(vector<A*> in, vector<A*> &out);
    
}

#endif //WEEK_10_TASK2_H
