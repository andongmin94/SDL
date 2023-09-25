#include <iostream>
#include <algorithm>

using namespace std;

int N, K, res, cnt;
int a[12];

void back(int cur, int d)
{   // current, depth
	// 기저 조건
	if (cur == cnt || d == K)
	{
		int sum = 0;
		for (int i = 0; i < cnt; i++)
			sum = sum * 10 + a[i];

		res = max(res, sum);
		return;
	}
	// 재귀
	for (int i = cur; i < cnt; i++)
	{
		for (int j = i + 1; j < cnt; j++)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			back(i, d + 1);
			a[j] = a[i];
			a[i] = temp;
		}
	}
}

int main()
{
	int T;
	cin >> T;
	for (int tc = 0; tc < T; tc++)
	{

		cin >> N >> K;

		fill(a, a + 12, 0);

		int C = N;

		cnt = 0;

		while (C)
		{
			C /= 10;

			cnt++;
		}

		for (int i = cnt - 1; i >= 0; i--)
		{
			a[i] = N % 10;

			N /= 10;
		}

		res = 0;
		back(0, 0);
		cout << "#" << tc + 1 << " " << res << endl;
	}
}