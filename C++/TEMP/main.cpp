#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int* arr_N = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr_N[i];
	int* arr_M = new int[M];
	for (int i = 0; i < M; i++)
		cin >> arr_M[i];
	int cnt_N = 1;
	int cnt_M = 1;
	int check_N = arr_N[0];
	int check_M = arr_M[0];
	for (int i = 1; i < N; i++)
	{
		if (check_N + 100 <= arr_N[i])
		{
			check_N = arr_N[i];
			cnt_N++;
		}
	}

	for (int i = 1; i < M; i++)
	{
		if (check_M + 360 <= arr_M[i])
		{
			check_M = arr_M[i];
			cnt_M++;
		}
	}
	cout << cnt_N << " " << cnt_M << endl;
	delete[] arr_N;
	delete[] arr_M;
}