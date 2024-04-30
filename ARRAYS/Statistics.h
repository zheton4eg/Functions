#pragma once
#include "Constants.h"
template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Sum(char arr[], const int n);

template<typename T>double Avg(T arr[], const int n);
const char* Avg(char arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValue(T arr[], const int n);
template<typename T>T minValue(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValue(T arr[], const int n);
template<typename T>T maxValue(T arr[ROWS][COLS], const int ROWS, const int COLS);
