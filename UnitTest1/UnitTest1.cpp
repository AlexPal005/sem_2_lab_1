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

        TEST_METHOD(TestMultiplicNumber){

            const int column_test = 2;
            const int row_test = 3;
            double arr1[row_test][column_test] = {
                {2,3},
                {4,5},
                {6,7}
            };
            const int number = 2;

            double** m1 = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                m1[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {

                for (int j = 0; j < column_test; j++)

                    m1[i][j] = arr1[i][j];

            }
            matrix new_matrix_1(m1, row_test, column_test);

            double res_mult_values[row_test][column_test] = {
               {4,6},
               {8,10},
               {12,14}
            };
            double** res_mult = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                res_mult[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {


                for (int j = 0; j < column_test; j++)
                    res_mult[i][j] = res_mult_values[i][j];

            }

            for (int i = 0; i < row_test; i++) {
                for (int j = 0; j < column_test; j++) {
                    Assert::IsTrue(res_mult[i][j] == new_matrix_1.multiplic_number(number)[i][j]);
                }
            }

        }
        

        TEST_METHOD(TestMultMatrix) {
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

            double res_mult_values[row_test][column_test2] = {
                {11,16,23},
                {19,28,41},
                {27,40,59}
            };
            double** res_mult = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                res_mult[i] = new double[column_test2];
            }
            for (int i = 0; i < row_test; i++) {


                for (int j = 0; j < column_test2; j++)
                    res_mult[i][j] = res_mult_values[i][j];

            }
            for (int i = 0; i < row_test; i++) {
                for (int j = 0; j < column_test2; j++) {
                    Assert::IsTrue(res_mult[i][j] == new_matrix_1.mult(new_matrix_1, new_matrix_2)[i][j]);
                }
            }

        }

        TEST_METHOD(TestMultMatrixSize) {
            const int column_test = 2;
            const int row_test = 3;
            double arr1[row_test][column_test] = {
                {2,3},
                {4,5},
                {6,7}
            };

            const int column_test2 = 2;
            const int row_test2 = 3;

            double arr2[row_test2][column_test2] = {
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

            Assert::IsTrue(0 == new_matrix_1.mult(new_matrix_1, new_matrix_2));
        }

        TEST_METHOD(TestDeterminant) 
        {
            const int row_test1 = 1;
            const int column_test1 = 1;
            
            double arr1[row_test1][column_test1] = {
                {2}
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

            const int row_test2 = 2;
            const int column_test2 = 2;

            double arr2[row_test2][column_test2] = {
                {2,3},
                {4,5}
            };

            double** m2 = new double* [row_test2];
            for (int i = 0; i < row_test2; i++) {

                m2[i] = new double[column_test2];
            }
            for (int i = 0; i < row_test2; i++) {


                for (int j = 0; j < column_test2; j++)
                    m2[i][j] = arr2[i][j];

            }

            matrix new_matrix_2(m2, row_test2, column_test2);

            const int row_test3 = 3;
            const int column_test3 = 3;

            double arr3[row_test3][column_test3] = {
                {2,3,8},
                {4,5,-1},
                {4,-2,1}
            };

            double** m3 = new double* [row_test3];
            for (int i = 0; i < row_test3; i++) {

                m3[i] = new double[column_test3];
            }
            for (int i = 0; i < row_test3; i++) {


                for (int j = 0; j < column_test3; j++)
                    m3[i][j] = arr3[i][j];

            }

            matrix new_matrix_3(m3, row_test3, column_test3);

            Assert::IsTrue(2 == new_matrix_1.det());
            Assert::IsTrue(-2 == new_matrix_2.det());
            Assert::IsTrue(-242 == new_matrix_3.det());
        }

        TEST_METHOD(TestDeterminantMoreThree)
        {
            const int row_test1 = 4;
            const int column_test1 = 4;

            double arr1[row_test1][column_test1] = {
                {2,3,8, 11},
                {4,5,-1,43},
                {4,-2,1, 4},
                {6,-10,78,-5}
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

            Assert::IsTrue(-34490 == new_matrix_1.det_for(m1,row_test1));
        }

        TEST_METHOD(TestTranspose) {
            const int column_test = 3;
            const int row_test = 2;
            double arr1[row_test][column_test] = {
                {2,4,6},
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
            const int column_test2 = 2;
            const int row_test2 = 3;

            double arr2[row_test2][column_test2] = {
                {2,3},
                {4,4},
                {6,5}
            };

            double** m2 = new double* [row_test2];
            for (int i = 0; i < row_test2; i++) {

                m2[i] = new double[column_test2];
            }
            for (int i = 0; i < row_test2; i++) {

                for (int j = 0; j < column_test2; j++)
                    m2[i][j] = arr2[i][j];

            }
            matrix new_matrix_1(m1, row_test, column_test);

            for (int i = 0; i < row_test; i++) {
                for (int j = 0; j < column_test2; j++) {
                    Assert::IsTrue(m2[i][j] == new_matrix_1.transpose()[i][j]);
                }
            }
        }

        TEST_METHOD(TestSolve) {
            const int column_test = 3;
            const int row_test = 2;
            double arr1[row_test][column_test] = {
                {1,2,3},
                {4,5,6}
            };

            double** m1 = new double* [row_test];
            for (int i = 0; i < row_test; i++) {

                m1[i] = new double[column_test];
            }
            for (int i = 0; i < row_test; i++) {

                for (int j = 0; j < column_test; j++)

                    m1[i][j] = arr1[i][j];

            }

            double arr[2] = { -1,2 };
            
            matrix new_matrix_1(m1, row_test, column_test);

            for (int i = 0; i < row_test - 1; i++) {

                Assert::IsTrue(arr[i] == new_matrix_1.solve()[i]);
            }
        }
	};
}
