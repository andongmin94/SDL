#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double c4, a3, a4;
    cin >> c4 >> a3 >> a4;
    c4 = c4 * 2 * 229 * 324;
    a3 = a3 * 2 * 297 * 420;
    a4 = a4 * 210 * 297;

    cout << fixed;
    cout << setprecision(6);
    cout << (c4 + a3 + a4) * 0.000001; 
}
