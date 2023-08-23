#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[10000] = {0,};
    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            arr[i] = i;
            cnt += 1;
        }
    }
    int res = 0;
    int i = 0;
    int j = 0;
    while(1)
    {
        if (j == M || cnt < M)
            break;
        if (arr[i] != 0)
        {
            res = arr[i];
            j += 1;
        }
        i += 1;
    }
    cout << res;
}