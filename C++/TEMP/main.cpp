#include <iostream>

using namespace std;

int main()
{
	int a, arr[3][3];
	cin >> a;
	if (a % 5 == 1)
	{
		int k = 1;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
			{
				arr[3 - j][3 - i] = k;
				k++;
			}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}
	else if (a % 5 == 2)
	{
		int k = 1;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
			{
				arr[2 - i][j] = k;
				k++;
			}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}
	else
	{
		int k = 10;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
			{
				arr[j][i] = k;
				k++;
			}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}
}