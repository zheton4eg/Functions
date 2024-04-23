#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimetr "\n-------------------------------------------------------------------------\n"

const int ROWS = 10;
const int COLS = 10;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort( int arr[], const int n);
void Sort( double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);


int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

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
	const int I_SIZE = 5;
	int arr[I_SIZE];
	FillRand(arr, I_SIZE);
	Print(arr, I_SIZE);
	Sort(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << "Сумма эдементов массива: " << Sum(arr, I_SIZE) << endl;//Sum of array elements
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, I_SIZE) << endl;//Avarage of array elements
	cout << "Минимальное значение в массиве: " << minValue(arr, I_SIZE) << endl;
	//cout << "Максимальное значение в массиве: " << maxValue(arr, n) << endl;
	//int shiftsR;
	//cout << "Введите кол-во сдвигов вправо: "; cin >> shiftsR;
	//cout << endl;
	//ShiftRight(arr, I_SIZE, shiftsR);
	//cout << endl;
	//int shiftsL;
	//cout << "Введите кол-во сдвигов влево: "; cin >> shiftsL;
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
	cout << "Сумма элементов массива: "<<  Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: "<<  Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: "<<  minValue(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValue(d_arr, D_SIZE) << endl;

	cout << delimetr;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	
	cout << delimetr;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;

	cout << delimetr;

	Sort(i_arr_2, ROWS, COLS);
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

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
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
				double buffer = arr[i];
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

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k==i?j+1:0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						
					}
				}
			}
		}	
	}
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
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
				sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}

double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / (double)n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS)/(ROWS * COLS);
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
