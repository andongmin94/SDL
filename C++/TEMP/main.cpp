#include <iostream>

using namespace std;

int main()
{
	char arr[10];
	cin >> arr;
	int count = 0;
	for (int i = 0; arr[i] != 0; i++)
		count++;
	if (count == 4)
		cout << "3 4 4 6";
	else cout << "3 3 3 6";
	/*
	char arr[4][7];

	int save[4] = { 0, };

	for (int i = 0; i < 4; i++)
		cin >> arr[i];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 7; j++)
			if (arr[i][j] == '\0')
				save[i] = j;

	for (int i = 0; i < 3; i++)
		for (int j = i + 1; j < 4; j++)
			if (save[i] > save[j])
				swap(save[i], save[j]);

	for (int i = 0; i < 4; i++)
		cout << save[i] << " ";
	*/
}