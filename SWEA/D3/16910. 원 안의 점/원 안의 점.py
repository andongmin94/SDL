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
        int cnt = 0;
        for (int x = -N; x <= N; x++)
        {
            for (int y = -N; y <= N; y++)
            {
                if (x * x + y * y <= N * N)
                    cnt += 1;
            }
        }
        cout << "#" << i + 1 << " " << cnt << endl;
    }
}