#include "pch.h"
#include "CppUnitTest.h"
#include "../sem_2_lab_1/matrix.h"
#include "../sem_2_lab_1/matrix.cpp"
using namespace std;


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSubtractionMatrix)
		{
            const int column_test = 2;
            const int row_test = 3;
            double arr1[row_test][column_test] = {
                {2,3},
                {4,5},
                {6,7}
            };

            double arr2[row_test][column_test] = {
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
            
            double res_subtraction_values[row_test][column_test] = {
                {1,1},
                {1,1},
                {1,1}
            };
            double** res_subtraction = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                res_subtraction[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {


                for (int j = 0; j < column_test; j++)
                    res_subtraction[i][j] = res_subtraction_values[i][j];

            }
            for (int i = 0; i < row_test; i++) {
                for (int j = 0; j < column_test; j++) {
                    Assert::IsTrue(res_subtraction[i][j] == new_matrix_1.subtraction_matrix(new_matrix_1, new_matrix_2)[i][j]);
                }
            }
            
            
		}

        TEST_METHOD(TestSubtractionMatrixSize)
        {
            const int column_test = 2;
            const int row_test = 3;
            double arr1[row_test][column_test] = {
                {2,3},
                {4,5},
                {6,7}
            };

            const int column_test2 = 3;
            const int row_test2 = 2;

            double arr2[row_test2][column_test2] = {
                {1,2,4},
                {3,4,5}
            };

            double** m1 = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                m1[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {


                for (int j = 0; j < column_test; j++)
                    m1[i][j] = arr1[i][j];

            }
            double** m2 = new double* [row_test2];
            for (int i = 0; i < row_test2; i++) {

                m2[i] = new double[column_test2];
            }
            for (int i = 0; i < row_test2; i++) {

                for (int j = 0; j < column_test2; j++)
                    m2[i][j] = arr2[i][j];

            }
            matrix new_matrix_1(m1, row_test, column_test);
            matrix new_matrix_2(m2, row_test2, column_test2);

            Assert::IsTrue(0 == new_matrix_1.subtraction_matrix(new_matrix_1, new_matrix_2));

        }

        TEST_METHOD(TestSumMatrix) {
            const int column_test = 2;
            const int row_test = 3;
            double arr1[row_test][column_test] = {
                {2,3},
                {4,5},
                {6,7}
            };

            double arr2[row_test][column_test] = {
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

            double res_subtraction_values[row_test][column_test] = {
                {3,5},
                {7,9},
                {11,13}
            };
            double** res_subtraction = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                res_subtraction[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {


                for (int j = 0; j < column_test; j++)
                    res_subtraction[i][j] = res_subtraction_values[i][j];

            }
            for (int i = 0; i < row_test; i++) {
                for (int j = 0; j < column_test; j++) {
                    Assert::IsTrue(res_subtraction[i][j] == new_matrix_1.sum_matrix(new_matrix_1, new_matrix_2)[i][j]);
                }
            }
        }

        TEST_METHOD(TestSumMatrixSize)
        {
            const int column_test = 2;
            const int row_test = 3;
            double arr1[row_test][column_test] = {
                {2,3},
                {4,5},
                {6,7}
            };

            const int column_test2 = 3;
            const int row_test2 = 2;

            double arr2[row_test2][column_test2] = {
                {1,2,4},
                {3,4,5}
            };

            double** m1 = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                m1[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {


                for (int j = 0; j < column_test; j++)
                    m1[i][j] = arr1[i][j];

            }
            double** m2 = new double* [row_test2];
            for (int i = 0; i < row_test2; i++) {

                m2[i] = new double[column_test2];
            }
            for (int i = 0; i < row_test2; i++) {

                for (int j = 0; j < column_test2; j++)
                    m2[i][j] = arr2[i][j];

            }
            matrix new_matrix_1(m1, row_test, column_test);
            matrix new_matrix_2(m2, row_test2, column_test2);

            Assert::IsTrue(0 == new_matrix_1.sum_matrix(new_matrix_1, new_matrix_2));

        }
	};
}
