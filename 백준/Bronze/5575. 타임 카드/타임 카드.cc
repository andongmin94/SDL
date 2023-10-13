#include <iostream>

using namespace std;

int main()
{
	int a[3][6];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 6; j++)
			cin >> a[i][j];

	for (int i = 0; i < 3; i++)
	{
		int h = a[i][3] - a[i][0];
		int m = a[i][4] - a[i][1];
		int s = a[i][5] - a[i][2];
		if (s < 0)
		{
			s = s + 60;
			m = m - 1;
		}
		if (m < 0)
		{
			m = m + 60;
			h = h - 1;
		}
		cout << h << " " << m << " " << s << endl;
	}
}