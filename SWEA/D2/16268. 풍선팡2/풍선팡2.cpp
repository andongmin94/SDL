#include <iostream>

using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        int** x = new int*[N];
        for (int i = 0; i < N; i++)
        {
            x[i] = new int[M];
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; ++j)
            {
                cin >> x[i][j];
            }
        }
        int max = 0;
        int di[4] = {0, 1, 0, -1};
        int dj[4] = {1, 0, -1, 0};
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int sum = x[i][j];
                for (int k = 0; k < 4; k++)
                {
                    int ni = i + di[k];
                    int nj = j + dj[k];
                    if (ni >= 0 && ni < N && nj >= 0 && nj < M)
                        sum += x[ni][nj];
                    if (sum > max)
                        max = sum;
                }
            }
        }
        cout << "#" << i + 1 <<" " << max << endl;
        for (int i = 0; i < N; i++)
        {
            delete[] x[i];
        }
        delete[] x;
    }
    return 0;
}