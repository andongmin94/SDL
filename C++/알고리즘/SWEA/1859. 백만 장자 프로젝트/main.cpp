#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		int* arr = new int[N]();

		for (int j = 0; j < N; j++)
		{
			cin >> arr[j];
		}
		int cnt = 0;
		long long cnt_boom = 0;
		for (int k = 0; k < N - 1; k++)
		{
			for (int l = k + 1; l < N; l++)
			{
				if (arr[k] < arr[l])
				{
					cnt += 1;
					cnt_boom -= arr[k];
					break;
				}
				if (arr[k] > arr[l])
				{
					if (l == N - 1)
					{
						cnt_boom += arr[k] * cnt;
						cnt = 0;
						break;
					}
				}
			}
		}
		cnt_boom += arr[N - 1] * cnt;
		cnt = 0;

		cout << "#" << i + 1 << " " << cnt_boom << endl;
		delete[] arr;
	}
}