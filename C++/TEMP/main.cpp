#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int arr[3][4] = { 0, };
	for (int i = 0; i < 3; i++)
		for (int j = 2 - i; j < 4; j++)
			arr[i][j] = a++;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
				cout << " ";
			else cout << arr[i][j];
		}
		cout << endl;
	}
}