#include <iostream>

using namespace std;

int main()
{
	int arr[6][2];
	int cnt = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> arr[i][j];
		if (arr[i][0] < arr[i][1])
		{
			int temp = arr[i][0];
			arr[i][0] = arr[i][1];
			arr[i][1] = temp;
			cnt++;
		}
		for (int j = 0; j < 2; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << cnt << "Έν";
}