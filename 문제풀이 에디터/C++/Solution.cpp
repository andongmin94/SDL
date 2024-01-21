#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    long long n = 1;
    for (int i = 1; i <= a; i++)
        n *= i;
    const int weekly = 7 * 24 * 60 * 60;
    cout << n / weekly;
}