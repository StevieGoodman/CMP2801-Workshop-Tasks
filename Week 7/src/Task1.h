#ifndef WEEK_7_TASK1_H
#define WEEK_7_TASK1_H

class Task1 {
public:
    void static run();
private:
    // Overloaded add functions
    int static add(int int1, int int2);
    // Won't compile because this function has same signature as above function
    // float static add(int int1, int int2);
    float static add(float float1, int int1);
    float static add(int int1, float float1);
    float static add(float float1, float float2);
};

#endif //WEEK_7_TASK1_H
