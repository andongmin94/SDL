#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long p1, q1, p2, q2;
    cin >> p1 >> q1 >> p2 >> q2;
    
    const bool res = (p1 * p2 % (q1 * q2 * 2) == 0);

    cout << res;
}
