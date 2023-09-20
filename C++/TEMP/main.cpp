#include <iostream>

using namespace std;

int arr[4][4] = { 3,4,1,6,3,5,3,6,0,0,0,0,5,4,6,0 };

int main()
{
	for (int i = 0; i < 4; i++)
		cin >> arr[2][i];
	int max = 0;
	int min = 10;
	int max_i, max_j;
	int min_i, min_j;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
			else if (min > arr[i][j])
			{
				min = arr[i][j];
				min_i = i;
				min_j = j;
			}
		}
	cout << "MAX=" << max << "(" << max_i << "," << max_j << ")" << endl;
	cout << "MIN=" << min << "(" << min_i << "," << min_j << ")" << endl;
}