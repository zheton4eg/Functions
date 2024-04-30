#include "FillRand.h"
//#include "FillRand.cpp"//Если функция не шаблонная, то ее реализация ни в коем случае не подключается на место вызова.

#include "Print.h"
#include "Print.cpp"//Если функция шаблонная, то на место вызова обязательно подключается реализация!

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
	cout <<"Сумма элементов : "<< Sum(arr, n) << endl;
	cout <<"Среднее арифметическое: "<< Sum(arr, n) / n<< endl;	
	cout<< "Минимальное значение в массиве: "<<minValue(arr, n)<<endl;
	cout<< "Максимальное значение в массиве: "<<maxValue(arr, n)<<endl;
	cout << "Введите кол-во сдвигов вправо: "; cin >> shiftsR;
	cout << endl;
	ShiftRight(arr, n, shiftsR);
	cout << endl;
	cout << "Введите кол-во сдвигов влево: "; cin >> shiftsL;
	cout << endl;
	ShiftLeft(arr, n, shiftsL);
    cout << endl;
	 
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное кол-во элементов в массиве: " << minValue(d_arr, D_SIZE) << endl;
	cout << "Максимальное кол-во элементов в массиве: " << maxValue(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное кол-во элементов в массиве: " << minValue(c_arr, C_SIZE) << endl;
	cout << "Максимальное кол-во элементов в массиве: " << maxValue(c_arr, C_SIZE) << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное кол-во элементов в массиве: " << minValue(i_arr_2, ROWS,COLS) << endl;
	cout << "Максимальное кол-во элементов в массиве: " << maxValue(i_arr_2, ROWS,COLS) << endl;
	cout << "Введите кол-во сдвигов вправо: "; cin >> shiftsR;
	cout << endl;
	ShiftRight(d_arr, D_SIZE, shiftsR);
	cout << endl;
	cout << "Введите кол-во сдвигов влево: "; cin >> shiftsL;
	cout << endl;
	ShiftLeft(d_arr, D_SIZE, shiftsL);
	cout << endl;

}







