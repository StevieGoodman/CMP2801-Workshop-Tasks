using namespace std;
#include <iostream>
#include <vector>
#include "Task2.h"

void Task2::run() {
    Task2::Robot r2;
    {
        Task2::Robot r1("r1");
        r1.whoAmI();
        r1.work();
        r1.work();
        r1.printWork();
        cout << "assign r1 to r2..." << endl;
        r2 = r1;
        r2.setName("r2");
        r2.whoAmI();
        r2.printWork();
    }
    r2.whoAmI();
    r2.printWork();
    cout << "end of example code..." << endl;
}

Task2::Robot::Robot() {
    this->_history = new vector<int>;
    this->workUnit = 0;
}
Task2::Robot::Robot(string name)
    : Task2::Robot::Robot() {
    this->_name = name;
}
Task2::Robot::~Robot() {
    this->_history = nullptr;
    delete this->_history;
}

/// Performs a unit of work.
/// Increments robot's workUnit attribute and pushes it to end of the history vector.
void Task2::Robot::work() {
    this->workUnit++;
    //cout << this->workUnit << endl;
    this->_history->push_back(this->workUnit);
}

/// Prints out the contents of the robot's work history to the console.
void Task2::Robot::printWork() {
    for (int work : *this->_history) {
        cout << work << endl;
    }
}

/// Setter for robot's private _name attribute.
void Task2::Robot::setName(string name) {
    this->_name = name;
}

/// Prints out the robot's name to the console.
void Task2::Robot::whoAmI() {
    cout << "I am a robot! My name is " << this->_name << endl;
}