#ifndef MATRIX_H
#define MATRIX_H

class matrix
{
public:
    matrix(double** matrix, int row_in, int column_in);
    ~matrix();
    void get_matrix();
    double** subtraction_matrix(matrix matrix_1, matrix matrix_2);
    double** add_matrix(matrix matrix_1, matrix matrix_2);
    double** multiplic_number(int num);
    double** mult(matrix matrix_1, matrix matrix_2);
    double det();
    double det_for(double** z, int p);
    void memory();
    void  solve();
    void single_matrix();
    double* transpose();

private:
    int row, column; // кількість рядків так стовпчиків матриці
    double** matr;
    double** elementary;
};
#endif
