#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
void Sort( int arr[], const int n);
double Sum(int arr[], const int n);
double minValue(int arr[], const int n);
double maxValue(int arr[], const int n);
void ShiftRight(int arr[], const int n, int shiftsR=0);
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
	cout << "Введите кол-во сдвигов вправо: "; cin >> shiftsR;
	cout << endl;
	ShiftRight(arr, n, shiftsR);
	cout << endl;
	cout << "Введите кол-во сдвигов влево: "; cin >> shiftsL;
	cout << endl;
	ShiftLeft(arr, n, shiftsL);
	cout << endl;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
    }
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}cout << endl;
} 
double Sum(int arr[], const int n)
{
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		m += arr[i];	
	}
	return m;
}
double minValue(int arr[], const int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
    }
	return min;
}
double maxValue(int arr[], const int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
void ShiftRight(int arr[], const int n, int shiftsR)
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