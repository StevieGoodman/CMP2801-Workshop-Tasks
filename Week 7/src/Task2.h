#ifndef WEEK_7_TASK2_H
#define WEEK_7_TASK2_H

#include <string>

class Task2 {
public:
    void static run();
    class Robot {
    public:
        Robot();
        Robot(string name);
        ~Robot();
        void setName(string name);
        void work();
        void whoAmI();
        void printWork();
    private:
        string _name;
        int workUnit;
        vector<int>* _history;
    };
};

#endif //WEEK_7_TASK2_H
