#include "Shift.h"
#include"stdafx.h"
#include"Constants.h"

template<typename T>void ShiftRight(T arr[], const int n, int shiftsR)
{
	for (int i = 0; i < shiftsR; i++)
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
template<typename T>void ShiftLeft(T arr[], const int n, int shiftsL)
{
	for (int j = 0; j < shiftsL; j++)
	{
		T buffer2 = arr[0];
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