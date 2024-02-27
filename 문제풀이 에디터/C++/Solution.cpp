#include <bits/stdc++.h>

using namespace std;

int recur(int n, int r, int c)
{
    if (n == 0) return 0;

    int divide = 1 << (n - 1);

    if (r < divide && c < divide) return recur(n-1, r, c);
    if (r < divide && c >= divide) return divide * divide + recur(n-1, r, c-divide);
    if (r >= divide && c < divide) return 2 * divide * divide + recur(n-1, r-divide, c);

    return 3 * divide * divide + recur(n-1, r-divide, c-divide);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, c;
    cin >> n >> r >> c;
    cout << recur(n,r,c);
}