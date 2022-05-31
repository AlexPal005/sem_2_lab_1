//Розв'язування системи рівнянь. Сума, добуток, різниця матриць, обернена матриця
#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{  
    const int row_test1 = 2;
    const int column_test1 = 3;

    double arr1[row_test1][column_test1] = {
        {1,2,3},
        {4,5,6}
    };
    double** m1 = new double* [row_test1];
    for (int i = 0; i < row_test1; i++) {

        m1[i] = new double[column_test1];
    }
    for (int i = 0; i < row_test1; i++) {


        for (int j = 0; j < column_test1; j++)
            m1[i][j] = arr1[i][j];

    }
    matrix new_matrix_1(m1, row_test1, column_test1);
    new_matrix_1.solve();     


    
}

