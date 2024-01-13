#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int n, s, d;
        cin >> n >> s >> d;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int d2, v;
            cin >> d2 >> v;

            if (s * d >= d2)
                sum += v;
        }
        cout << "Data Set " << i + 1 << ":" << '\n';
        cout << sum << '\n' << '\n';
    }
}