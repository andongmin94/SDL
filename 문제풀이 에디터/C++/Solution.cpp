#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d, e, f, g, h;

    cin >> a >> b;

    c = 100 - a;
    d = 100 - b;
    e = 100 - (c + d);
    f = c * d;
    g = f / 100;
    h = f % 100;
    cout << c << ' ' << d << ' ' << e << ' ' << f << ' ' << g << ' ' << h << '\n';
    cout << e + g << ' ' << h << '\n';
}