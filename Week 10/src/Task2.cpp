using namespace std;
#include <vector>
#include <cassert>
#include "Task2.h"

void Task2::run() {
    const vector<Task2::A*> in { new Task2::A, new Task2::B, new Task2::C };
    vector<Task2::A*> out {};
    Task2::test(in, out);
    assert(out.size() != 0);
}

void Task2::A::sayHello() {
    cout << "Hello!" << endl;
}

string Task2::A::name() {
    return "A";
}

string Task2::B::name() {
    return "B";
}

string Task2::C::name() {
    return "C";
}

bool Task2::test(vector<A *> in, vector<A *> &out) {
    {
        for (int i = 0; i < (int)in.size(); i++) {
            A *ptr;
            if (in[i]->name() == "A") {
                ptr = new A;
            }
            else if (in[i]->name() == "B") {
                ptr = new B;
            }
            else if (in[i]->name() == "C") {
                ptr = new C;
            }
            else {
                cout << "What are you trying to do?!" << endl;
                return false;
            }
            out.push_back(ptr);
            out[i]->sayHello();
        }
        return true;
    }
}