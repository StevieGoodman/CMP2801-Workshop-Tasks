#ifndef WEEK_11_MATRIX_H
#define WEEK_11_MATRIX_H

template <typename T, int MAXROWS, int MAXCOLS>
class Matrix {
private:
    T arr[0][0];
    int rows{};
    int cols{};
public:
    Matrix(int rows, int cols) {
        arr[MAXROWS][MAXCOLS];
        this->rows = rows;
        this->cols = cols;
    }
    void setElement(int row, int col, T val) {
        this->arr[row][col] = val;
    }
    T getElement(int row, int col) {
        return arr[row][col];
    }
};

#endif //WEEK_11_MATRIX_H