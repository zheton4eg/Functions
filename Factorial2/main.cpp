#include <iostream>
using namespace std;
//#define FACTORIAL
double Factorial(int n);
double Power(double a, double n);
void main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL
	int n;
	cout << "¬ведите число: "; cin >> n;
	cout Ђ n << "! = " Ђ Factorial(n) << endl;
#endif // FACTORIAL
	double n;
	double a;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a, n) << endl;
}
double Factorial(int n)
{
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, double n)
{
	double N = 1;
	if (n < 0)
	{
		n = -n;
		a = 1 / a;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}
