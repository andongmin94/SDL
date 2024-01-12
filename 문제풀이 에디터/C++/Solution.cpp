#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string j, k;
        cin >> j >> k;
        if (j == k)
            cout << "OK" << '\n';
        else cout << "ERROR" << '\n';
    }
}