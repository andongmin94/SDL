#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[5][5] = { 0, };

	int row, col;
	cin >> row >> col;

	if (row - 1 >= 0 && col - 1 >= 0)
		arr[row - 1][col - 1] = 1; // 좌측 상단
	if (row - 1 >= 0 && col + 1 < 5)
		arr[row - 1][col + 1] = 1; // 우측 상단
	if (row + 1 < 5 && col + 1 < 5)
		arr[row + 1][col + 1] = 1; // 우측 하단
	if (row + 1 < 5 && col - 1 >= 0)
		arr[row + 1][col - 1] = 1; // 좌측 하단

	// 상하좌우
	int dr[] = {-1, -1, 1, 1};
	int dc[] = {-1, 1, 1, -1};

	for (int i = 0; i < 4; i++) // i : 방향 번째
	{
		for (int d = 1; d < 5; d++) // d : 거리
		{
			int nr = row + dr[i] * d;
			int nc = col + dc[i] * d;

			if (nr < 0 || nc < 0 || nr >= 5 || nc >= 5)
				continue; // 맵 바깥으로 넘어가는 좌표면 무시!
			arr[nr][nc] = 1;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << arr[i][j];
		cout << '\n';
	}
}