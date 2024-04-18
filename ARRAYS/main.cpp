#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Sort( int arr[], const int n);
void Sort( double arr[], const int n);
void Sort(char arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
double Avg(int arr[], const int n);
char Avg(char arr[], const int n);
int minValue(int arr[], const int n);
double minValue(double arr[], const int n);
char minValue(char arr[], const int n);
int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);
char maxValue(char arr[], const int n);
void ShiftLeft(int arr[], const int n, int shiftsL=0);
void ShiftLeft(double arr[], const int n, int shiftsL=0);
void ShiftLeft(char arr[], const int n, int shiftsL=0);
void ShiftRight(int arr[], const int n, int shiftsR = 0);
void ShiftRight(double arr[], const int n, int shiftsR = 0);
void ShiftRight(char arr[], const int n, int shiftsR = 0);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Funktion!" << endl;
	const int n = 5;
	char arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма эдементов массива: " << Sum(arr, n) << endl;//Sum of array elements
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;//Avarage of array elements
	cout << "Минимальное значение в массиве: " << minValue(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(arr, n) << endl;
	int shiftsR;
	//cout << "Введите кол-во сдвигов вправо: "; cin >> shiftsR;
	//cout << endl;
	//ShiftRight(arr, n, shiftsR);
	//cout << endl;
	//int shiftsL;
	//cout << "Введите кол-во сдвигов влево: "; cin >> shiftsL;
	//cout << endl;
	//ShiftLeft(arr, n, shiftsL);
	//cout << endl;
	const int SIZE = 8;
	char brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: "<<  Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: "<<  Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: "<<  minValue(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: "<<  maxValue(brr, SIZE) << endl;
	

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
		arr[i] = rand() % 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
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
void Sort(double arr[], const int n)
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
void Sort(char arr[], const int n)
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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];	
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}char Avg(char arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}

int minValue(int arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
    }
	return min;
}
double minValue(double arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
    }
	return min;
}
char minValue(char arr[], const int n)
{
	int min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
    }
	return min;
}
int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValue(double arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
char maxValue(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
void ShiftLeft(int arr[], const int n, int shiftsL)
{
	for (int j = 0; j < shiftsL; j++)
	{
		int buffer2 = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer2;
	}
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << tab;
	}
}
void ShiftLeft(double arr[], const int n, int shiftsL)
{
	for (int j = 0; j < shiftsL; j++)
	{
		int buffer2 = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer2;
	}
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << tab;
	}
}
void ShiftLeft(char arr[], const int n, int shiftsL)
{
	for (int j = 0; j < shiftsL; j++)
	{
		int buffer2 = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buffer2;
	}
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << tab;
	}
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
}
void ShiftRight(double arr[], const int n, int shiftsR)
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
}
void ShiftRight(char arr[], const int n, int shiftsR)
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
}
