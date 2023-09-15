#include <iostream>

using namespace std;

int main()
{
	int a;
	char b;
	cin >> a >> b;
	int arr[5][5] = { 0, };
	for (int i = 0; i < 5; i++)
		arr[a - 1][4 - i] = b++;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			if (arr[i][j] == 0)
				cout << 0;
			else cout << (char)arr[i][j];
		cout << endl;
	}
}