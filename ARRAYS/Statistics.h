#pragma once
#include "Constants.h"

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
