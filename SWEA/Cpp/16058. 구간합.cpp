#include <iostream>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M;
        cin >> N >> M;
        int* arr = new int[N];
        for (int j = 0; j < N; j++)
            cin >> arr[j];
        int max = 0;
        int min = 1000000;

        for (int i = 0; i <= N - M; i++)
        {
            int sum = 0;
            
            for (int j = 0; j < M; j++)
                sum += arr[i + j];

            if (sum > max)
                max = sum;
            if (sum < min)
                min = sum;
        }
        int res = max - min;
        cout << "#" << i + 1 << " " << res << endl;
        delete[] arr;
    }
}