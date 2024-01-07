#include <bits/stdc++.h>

using namespace std;

int B[100000]={0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
            B[j] = j+1;
        int l = 1;
        while (true)
        {
            if (l == k)
                break;
            l *= 2;
            
            if (l > k)
            {
                l /= 2;
                swap(B[l-1], B[k-1]);
                break;
            }
        }
        for (int j = 0; j < k; j++)
            if (B[j] == 1)
                cout << j + 1 << '\n';
    }
}
