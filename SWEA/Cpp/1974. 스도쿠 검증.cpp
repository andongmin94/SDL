#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int res = 1;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int res = 1;
		int arr[9][9];
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 9; k++)
				cin >> arr[j][k];
		for (int l = 0; l < 9; l++)
		{
			set<int> row;
			for (int m = 0; m < 9; m++)
				row.insert(arr[l][m]);
			if (row.size() != 9)
			{
				res = 0;
				break;
			}
		}

		for (int n = 0; n < 9; n++)
		{
			set<int> col;
			for (int o = 0; o < 9; o++)
				col.insert(arr[o][n]);
			if (col.size() != 9)
			{
				res = 0;
				break;
			}
		}

		for (int p = 0; p < 9; p += 3)
			for (int q = 0; q < 9; q += 3)
			{
				set<int> x;
				for (int r = 0; r < 3; r++)
					for (int s = 0; s < 3; s++)
						x.insert(arr[p + r][q + s]);
				if (x.size() != 9)
				{
					res = 0;
					break;
				}
			}
		cout << "#" << i + 1 << " " << res << endl;
	}
}