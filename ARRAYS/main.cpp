#include "FillRand.h"
//#include "FillRand.cpp"//���� ������� �� ���������, �� �� ���������� �� � ���� ������ �� ������������ �� ����� ������.

#include "Print.h"
#include "Print.cpp"//���� ������� ���������, �� �� ����� ������ ����������� ������������ ����������!

#include "Sort.h"
#include "Sort.cpp"

#include "Shift.h"
#include "Shift.cpp"

#include "Statistics.h"
#include "Statistics.cpp"

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Funktion!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	int shiftsR;
	int shiftsL;
	cout <<"����� ��������� : "<< Sum(arr, n) << endl;
	cout <<"������� ��������������: "<< Sum(arr, n) / n<< endl;	
	cout<< "����������� �������� � �������: "<<minValue(arr, n)<<endl;
	cout<< "������������ �������� � �������: "<<maxValue(arr, n)<<endl;
	cout << "������� ���-�� ������� ������: "; cin >> shiftsR;
	cout << endl;
	ShiftRight(arr, n, shiftsR);
	cout << endl;
	cout << "������� ���-�� ������� �����: "; cin >> shiftsL;
	cout << endl;
	ShiftLeft(arr, n, shiftsL);
    cout << endl;
	 
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� ���-�� ��������� � �������: " << minValue(d_arr, D_SIZE) << endl;
	cout << "������������ ���-�� ��������� � �������: " << maxValue(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
	cout << "����������� ���-�� ��������� � �������: " << minValue(c_arr, C_SIZE) << endl;
	cout << "������������ ���-�� ��������� � �������: " << maxValue(c_arr, C_SIZE) << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� ���-�� ��������� � �������: " << minValue(i_arr_2, ROWS,COLS) << endl;
	cout << "������������ ���-�� ��������� � �������: " << maxValue(i_arr_2, ROWS,COLS) << endl;
	cout << "������� ���-�� ������� ������: "; cin >> shiftsR;
	cout << endl;
	ShiftRight(d_arr, D_SIZE, shiftsR);
	cout << endl;
	cout << "������� ���-�� ������� �����: "; cin >> shiftsL;
	cout << endl;
	ShiftLeft(d_arr, D_SIZE, shiftsL);
	cout << endl;

}







