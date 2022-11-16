using namespace std;
#include <iostream>
#include "Task4.h"

void Task4::run() {
    // Vector definitions
    vector<int> list1    = vector<int>{5, 2, 7, 9, 6, 3, 2};
    vector<double> list2 = vector<double>{1.1, 0.5, 7.3, 2.6, 9.9};
    vector<float> list3  = vector<float>{7.3f, 2.5f, 8.9f, 2.6f, 0.2f};
    
    // Function calls (ascending)
    Task4::sort_numbers(list1, true);
    Task4::sort_numbers(list2, true);
    Task4::sort_numbers(list3, true);
    
    // Function calls (descending)
    Task4::sort_numbers(list1, false);
    Task4::sort_numbers(list2, false);
    Task4::sort_numbers(list3, false);
}

/// Sorts a series of integers in a vector in either ascending or descending order.
void Task4::sort_numbers(vector<int>& input, bool ascending_order) {
    sort(input.begin(), input.end());
    if (!ascending_order) { reverse(input.begin(), input.end()); }
    for (int num : input) { cout << num << " "; }
    cout << endl;
}
/// Sorts a series of doubles in a vector in either ascending or descending order.
void Task4::sort_numbers(vector<double>& input, bool ascending_order) {
    sort(input.begin(), input.end());
    if (!ascending_order) { reverse(input.begin(), input.end()); }
    for (double num : input) { cout << num << " "; }
    cout << endl;
}
/// Sorts a series of floats in a vector in either ascending or descending order.
void Task4::sort_numbers(vector<float>& input, bool ascending_order) {
    sort(input.begin(), input.end());
    if (!ascending_order) { reverse(input.begin(), input.end()); }
    for (float num : input) { cout << num << " "; }
    cout << endl;
}