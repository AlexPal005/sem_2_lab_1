#ifndef MATRIX_H
#define MATRIX_H

class matrix
{
public:
    matrix(double** matrix, int row_in, int column_in); //�����������
    ~matrix(); // ����������
    void get_matrix();// ����������� �������
    double** subtraction_matrix(matrix matrix_1, matrix matrix_2); //������ �������
    double** sum_matrix(matrix matrix_1, matrix matrix_2);//���� �������
    double** multiplic_number(int num);// �������� ������� �� �����
    double** mult(matrix matrix_1, matrix matrix_2);// �������� ������� �� �������
    double det(); // ��������� ������� <=3
    double det_for(double** z, int p);// ��������� ������� >=3
    void memory();// �������� ���'��
    double* solve();// �������� ������
    void single_matrix(); // ��������� �������� �������
    double** transpose(); // ������������� �������

private:
    int row, column; // ������� ����� ��� ��������� �������
    double** matr;
    double** elementary; // �������� �������
};
#endif
