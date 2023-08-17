#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int K, N, M;
        cin >> K >> N >> M;
        int* arr = new int[M + 2];
        arr[0] = {0};
        arr[M + 1] = {N};
        for (int j = 1; j < M + 1; j++)
            cin >> arr[j];

        int cnt = 0; // 충전 횟수
        int start = 0; // 출발 위치

        for (int x = 1; x < M + 2; x++)
        {
            if (arr[x] - arr[x - 1] > K)
            {
                cnt = 0;
                break;
            }

            if (arr[x] - start > K)
            {
                start = arr[x - 1];
                cnt += 1;
            }
        }
        cout << "#" << i + 1 << " " << cnt << endl;
    }
}