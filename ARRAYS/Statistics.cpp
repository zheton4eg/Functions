#include "Statistics.h"
template<typename T>T Sum(T arr[], const int n)
{
	T m = T();
	for (int i = 0; i < n; i++)
	{
		m += arr[i];
	}
	return m;
}

template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T m = T();
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			m += arr[i][j];
		}
	}
	return m;
}
template<typename T>double Avg(T arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

template<typename T>T minValue(T arr[], const int n)
{
	T min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T minValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
template<typename T>T maxValue(T arr[], const int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

template<typename T>T maxValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}