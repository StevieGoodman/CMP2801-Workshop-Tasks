#ifndef WEEK_7_TASK4_H
#define WEEK_7_TASK4_H

using namespace std;
#include <vector>

/// This class could be simplified using generic type parameters, but we haven't covered generics in C++ yet,
/// so I'm avoiding using them in this task.
class Task4 {
public:
    void static run();
private:
    void static sort_numbers(vector<int>& input, bool ascending_order);
    void static sort_numbers(vector<double>& input, bool ascending_order);
    void static sort_numbers(vector<float>& input, bool ascending_order);
};

#endif //WEEK_7_TASK4_H
