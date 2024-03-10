#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, d, i, l, n;
    cin >> s >> d >> i >> l >> n;
    int cnt = 0;
    
    while((s+d+i+l)/4 < n)
    {
        s++;
        cnt++;
    }
    cout << cnt;
}