#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);
const char* Sum(char arr[], const int n);


template<typename T>
double Avg(T arr[], const int n);
const char* Avg(char arr[], const int n);

template<typename T>
T minValue(T arr[], const int n);

template<typename T>
T maxValue(T arr[], const int n);

template<typename T>
void ShiftRight(T arr[], const int n, int shiftsR);

template<typename T>
void ShiftLeft(T arr[], const int n, int shiftsL);

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
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
    }
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();	
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
    }
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout<< arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}cout << endl;
} 
template<typename T>
T Sum(T arr[], const int n)
{
	T m = 0;
	for (int i = 0; i < n; i++)
	{
		m += arr[i];	
	}
	return m;
}
const char* Sum(char arr[], const int n)
{
	return "Для типа данных 'char' сумма не вычисляется";
}
template<typename T>
double Avg(T arr[], const int n)
{
	return Sum(arr, n) / (double)n;
	//FreeBSD
	//Prohybited
}
const char* Avg(char arr[], const int n)
{
	return "Для типа данных 'char' AVG не вычисляется"; 
	//FreeBSD
	//Prohybited
}
template<typename T>
T minValue(T arr[], const int n)
{
	T min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
    }
	return min;
}
template<typename T>
T maxValue(T arr[], const int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
void ShiftRight(T arr[], const int n, int shiftsR)
{
	for (int i = 0; i < shiftsR;i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];

		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
template<typename T>
void ShiftLeft(T arr[], const int n, int shiftsL)
{
	for (int j = 0; j < shiftsL; j++)
	{
		T buffer2 = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n-1] = buffer2;
	}
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << tab;
	}
}