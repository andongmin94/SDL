#include <iostream>

using namespace std;

int main()
{
	int arr[3][4];
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			for (int j = 0; j < 4; j++)
			{
				arr[i][j] = a;
				a++;
			}
		if (i == 1)
			for (int j = 0; j < 4; j++)
			{
				arr[i][j] = b;
				b++;
			}
		if (i == 2)
			for (int j = 0; j < 4; j++)
			{
				arr[i][j] = c;
				c++;
			}
	}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
}