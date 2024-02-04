#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q;
    cin >> p >> q;

    if (p <= 50 && q <= 10)
        cout << "White";
    else if (q > 30)
        cout << "Red";
    else cout << "Yellow";
}
