using namespace std;
#include <iostream>
#include <vector>
#include "Task3.h"
#include "Task3/Animal.h"
#include "Task3/Sheep.h"
#include "Task3/Cow.h"
#include "Task3/Frisian.h"
using namespace Task3;

void Task3::run() {
    // Get user input.
    string userInput;
    getline(cin, userInput);
    // Creates a vector of animals.
    vector<Animal*> container;
    for (int i=0; i < stoi(userInput); i++) {
        container.push_back(new Sheep);
    }
    // Checks that each Animal class has a speak() method.
    for (const auto &animal: container) {
        animal->speak();
    }
}