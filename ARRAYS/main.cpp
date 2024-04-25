#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
T minValue(T arr[], const int n);

template<typename T>
T maxValue(T arr[], const int n);

template<typename T>
void ShiftRight(T arr[], const int n, int shiftsR=0);

void ShiftLeft(int arr[], const int n, int shiftsL=0);

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
	//cout << "Введите кол-во сдвигов вправо: "; cin >> shiftsR;
	//cout << endl;
	//ShiftRight(arr, n, shiftsR);
	//cout << endl;
	//cout << "Введите кол-во сдвигов влево: "; cin >> shiftsL;
	//cout << endl;
	//ShiftLeft(arr, n, shiftsL);
	//cout << endl;
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
template<typename T>
double Avg(T arr[], const int n)
{
	return Sum(arr, n) / (double)n;
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
		int buffer = arr[n - 1];
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
}void ShiftLeft(int arr[], const int n, int shiftsL)
{
	for (int j = 0; j < shiftsL; j++)
	{
		int buffer2 = arr[0];
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