#ifndef MATRIX_H
#define MATRIX_H

class matrix
{
public:
    matrix(double** matrix, int row_in, int column_in); //конструктор
    ~matrix(); // деструктор
    void get_matrix();// надрукувати матрицю
    double** subtraction_matrix(matrix matrix_1, matrix matrix_2); //р≥зниц€ матриць
    double** sum_matrix(matrix matrix_1, matrix matrix_2);//сума матриць
    double** multiplic_number(int num);// множенн€ матриц≥ на число
    double** mult(matrix matrix_1, matrix matrix_2);// множенн€ матриц≥ на матрицю
    double det(); // ¬изначник матриц≥ <=3
    double det_for(double** z, int p);// визначник матриц≥ >=3
    void memory();// очищенн€ пам'€т≥
    double* solve();// вир≥шенн€ р≥вн€нь
    void single_matrix(); // створенн€ одиничноњ матриц≥
    double** transpose(); // транспонована матриц€

private:
    int row, column; // к≥льк≥сть р€дк≥в так стовпчик≥в матриц≥
    double** matr;
    double** elementary; // одинична матриц€
};
#endif
