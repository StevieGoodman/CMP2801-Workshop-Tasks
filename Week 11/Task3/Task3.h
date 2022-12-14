#ifndef WEEK_11_TASK3_H
#define WEEK_11_TASK3_H

#include <iostream>

namespace Task3 {
    template <typename T>
    int compare(T& a, T& b) {
        if (a < b) { return -1; }
        else if (a > b ) { return 1; }
        return 0;
    }
    void run() {
        int iA = 10;
        int iB = 20;
        std::cout << compare(iA, iB) << '\n';
        std::string sA = "Hello";
        std::string sB = "World";
        std::cout << compare(sA, sB) << '\n';
        std::cout << compare("Hello", "World") << '\n';
    }
}

#endif //WEEK_11_TASK3_H