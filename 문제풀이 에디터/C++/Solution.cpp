#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, x, b, y;
    cin >> a >> x >> b >> y;
    int t;
    cin >> t;

    cout << (t - 30 > 0 ? (t - 30) * x * 21  + a : a) << " " << (t - 45 > 0 ? (t - 45) * y * 21 + b : b);
}