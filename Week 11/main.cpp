#include <iostream>
#include "Task1/Task1.h"
#include "Task2/Task2.h"
#include "Task3/Task3.h"

int main() {
    std::cout << "=== TASK 1 ===" << '\n';
    Task1::run();
    std::cout << "\n\n";

    std::cout << "=== TASK 2 ===" << '\n';
    Task2::run();
    std::cout << "\n\n";

    std::cout << "=== TASK 3 ===" << '\n';
    Task3::run();
    std::cout << "\n\n";
    
    return 0;
}
