//Розв'язування системи рівнянь. Сума, добуток, різниця матриць, обернена матриця
#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{  
    const int column_test = 2;
    const int row_test = 3;
    double arr1[row_test][column_test] = { // матриця new_matrix_1
        {2,3},
        {4,5},
        {6,7}
    };

    double arr2[row_test][column_test] = { // матриця new_matrix_2
        {1,2},
        {3,4},
        {5,6}
    };

    double** m1 = new double* [row_test];
    for (int i = 0; i < row_test; i++) {

        m1[i] = new double[column_test];
    }
    for (int i = 0; i < row_test; i++) {


        for (int j = 0; j < column_test; j++)
            m1[i][j] = arr1[i][j];

    }
    double** m2 = new double* [row_test];
    for (int i = 0; i < row_test; i++) {

        m2[i] = new double[column_test];
    }
    for (int i = 0; i < row_test; i++) {


        for (int j = 0; j < column_test; j++)
            m2[i][j] = arr2[i][j];

    }
    matrix new_matrix_1(m1, row_test, column_test);
    matrix new_matrix_2(m2, row_test, column_test);
    cout << "----------MENU-----------" << endl;
    cout << "1.Subtraction matrix" << endl;
    cout << "2.The sum of matrices" << endl;
    cout << "3.Multiplying matrix by a number" << endl;
    cout << "4.Multiplication of the matrix by the matrix" << endl;
    cout << "5.Determinant" << endl;
    cout << "6.Solve the system of linear equations" << endl;
    cout << "7.Transposed matrix" << endl;
    int val = 0; // число, на яке множимо матрицю
    while (1) {
        int it;
        cin >> it;
        switch (it) {
        case 1:
            new_matrix_1.subtraction_matrix(new_matrix_1, new_matrix_2);
            break;
        case 2:
            new_matrix_1.sum_matrix(new_matrix_1, new_matrix_2);
            break;
        case 3:
            cout << "Enter the number by which you want to multiply the matrix" << endl;
            cin >> val;
            new_matrix_1.multiplic_number(val);
            break;
        case 4:
            new_matrix_1.sum_matrix(new_matrix_1, new_matrix_2);
            break;
        case 5:
            new_matrix_1.det();
            break;
        case 6:
            new_matrix_1.solve();
            break;
        case 7:
            new_matrix_1.transpose();
            break;
        }

    }

    

    
}

