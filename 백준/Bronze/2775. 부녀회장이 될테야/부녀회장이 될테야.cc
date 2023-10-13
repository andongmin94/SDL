#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int k, n;
        cin >> k;
        cin >> n;

        int arr[15][15] = {0, };
        int sum = 0;
        for (int y = 1; y <= n; y++)
            arr[0][y] = y; 
        for (int x = 1; x <= k; x++)
            for (int y = 1; y <= n; y++)
                for (int z = 1; z <= y; z++)
                    arr[x][y] += arr[x-1][z];
        for (int y = 1; y <= n; y++)
            sum += arr[k-1][y];
        cout << sum << endl;
    }
}