using namespace std;
#include <iostream>
#include <string>
#include "Task3.h"

void Task3::run() {
    Task3::variable_type(52);
    Task3::variable_type(6.9);
    Task3::variable_type("Prismatic");
}

void Task3::variable_type(int number) {
    cout << number << " - The variable is an integer" << endl;
}
void Task3::variable_type(double number) {
    cout << number << " - The variable is a double" << endl;
}
void Task3::variable_type(string message) {
    cout << "\"" << message << "\" - The variable is a string" << endl;
}