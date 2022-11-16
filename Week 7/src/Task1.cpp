using namespace std;
#include <iostream>
#include <cassert>
#include "Task1.h"

/// This has expected behaviour; two functions with the same signature may not exist, even if
/// they have different return types.
void Task1::run() {
    // Calculate results
    int result1 = add(5, 3);
    // float result2 = add(4, 9);
    float result3 = add(2.1f, 7);
    float result4 = add(6, 3.2f);
    float result5 = add(3.6f, 5.3f);

    // Output results
    cout << result1 << endl;
    // cout << result2 << endl;
    cout << result3 << endl;
    cout << result4 << endl;
    cout << result5 << endl;
    
    // Unit tests
    assert(result1 == 8);
    // assert(result2 == 13);
    assert(result3 == 9.1f);
    assert(result4 == 9.2f);
    assert(result5 == 8.9f);
}

// Overloaded add functions
int Task1::add(int int1, int int2) {
    return int1 + int2;
}
// Won't compile because this function has same signature as above function
// float Task1::add(int int1, int int2) {
//     return int1 + int2;
// }
float Task1::add(float float1, int int1) {
    return float1 + int1;
}
float Task1::add(int int1, float float1) {
    return float1 + int1;
}
float Task1::add(float float1, float float2) {
    return float1 + float2;
}