#define _USE_MATH_DEFINES

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a;
    cin >> a;

    cout << fixed << setprecision(9);
    cout << sqrt(a / M_PI) * M_PI * 2;
}
