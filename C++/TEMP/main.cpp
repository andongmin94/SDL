#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	int arr[7][4] = { 0, };
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 4; j++)
			arr[i][j] = n++;
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < 4; i++)
	{
		arr[a][i] = 0;
		arr[b][i] = 0;
		arr[c][i] = 0;
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}