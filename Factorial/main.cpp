#include <iostream>
using namespace std;
void main()
{
	int n, fact = 1;
	cout << "������� �����: "; cin >> n;
	for(int i = 1; i <= n; i++)
	{
		fact *= i;
		cout << fact << endl;
	}
}