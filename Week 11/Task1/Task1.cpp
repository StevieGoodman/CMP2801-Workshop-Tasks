#include <cassert>
#include <iostream>
#include "Task1.h"
    
template <typename T>
void Task1::swap(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}
void Task1::run() {
    int x = 10;
    int y = 20;
    Task1::swap(x, y);
    std::printf("x=%d, y=%d", x, y);
    assert(x == 20);
    assert(y == 10);
    
    std::cout << '\n';
    
    std::string s = "first";
    std::string t = "second";
    Task1::swap(s, t);
    std::printf("s=%s, t=%s", s.c_str(), t.c_str());
    assert(s == "second");
    assert(t == "first");
}