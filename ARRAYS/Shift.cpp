
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
}

void ShiftRight(int arr[], const int n, int shiftsR)
{
	for (int i = 0; i < shiftsR; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];

		}
		arr[0] = buffer;
	}
}

void ShiftRight(double arr[], const int n, int shiftsR)
{
	for (int i = 0; i < shiftsR; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(char arr[], const int n, int shiftsR)
{
	for (int i = 0; i < shiftsR; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];

		}
		arr[0] = buffer;
	}
}