#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"







void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Funktion!" << endl;
	const int I_SIZE = 5;
	int arr[I_SIZE];
	FillRand(arr, I_SIZE);
	Print(arr, I_SIZE);
	Sort(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << "����� ��������� �������: " << Sum(arr, I_SIZE) << endl;//Sum of array elements
	cout << "�������-�������������� ��������� �������: " << Avg(arr, I_SIZE) << endl;//Avarage of array elements
	cout << "����������� �������� � �������: " << minValue(arr, I_SIZE) << endl;
	//cout << "������������ �������� � �������: " << maxValue(arr, n) << endl;
	//int shiftsR;
	//cout << "������� ���-�� ������� ������: "; cin >> shiftsR;
	//cout << endl;
	//ShiftRight(arr, I_SIZE, shiftsR);
	//cout << endl;
	//int shiftsL;
	//cout << "������� ���-�� ������� �����: "; cin >> shiftsL;
	//cout << endl;
	//ShiftLeft(arr, I_SIZE, shiftsL);
	//cout << endl;

	cout << delimetr;

	const int D_SIZE = 8;
	int d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: "<<  Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: "<<  Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� � �������: "<<  minValue(d_arr, D_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValue(d_arr, D_SIZE) << endl;

	cout << delimetr;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
	
	cout << delimetr;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;

	cout << delimetr;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}










