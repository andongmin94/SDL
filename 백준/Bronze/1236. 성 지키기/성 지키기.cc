#include <iostream>

using namespace std;

char arr[50][50];

int main()
{
	int N, M;
	cin >> N >> M;
	int cnt = 0;
	int cnt2 = 0;
	for (int i = 0; i < N; i++)
	{
		bool checker = false;
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'X')
				checker = true;
		}
		if (checker == false)
			cnt++;
	}

	for (int i = 0; i < M; i++)
	{
		bool checker = false;
		for (int j = 0; j < N; j++)
			if (arr[j][i] == 'X')
				checker = true;
		if (checker == false)
			cnt2++;
	}
	if (cnt2 > cnt)
		cnt = cnt2;
	cout << cnt;
}