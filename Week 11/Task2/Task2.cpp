#include <cstdio>
#include <iostream>
#include "Task2.h"
#include "Matrix.h"

void Task2::run() {
    Matrix<int, 10, 10> i_mat(5,5);
    i_mat.setElement(0, 0, 10);
    printf("Int: %d", i_mat.getElement(0, 0));

    std::cout << '\n';
    
    Matrix<float, 10, 10> f_mat(5, 5);
    f_mat.setElement(0, 0, 7.5);
    printf("Float: %f", f_mat.getElement(0, 0));
}