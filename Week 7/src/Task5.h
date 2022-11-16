#ifndef WEEK_7_TASK5_H
#define WEEK_7_TASK5_H

using namespace std;
#include <string>

class Task5 {
public:
    void static run();
    class A {
    public:
        A(string name);
        void set_name(string new_name);
        void print_name();
    private:
        string _name;
    };
};

#endif //WEEK_7_TASK5_H
