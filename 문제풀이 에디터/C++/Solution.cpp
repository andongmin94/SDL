#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, L, R;
    cin >> X >> L >> R;
    int var = X - L;
    int var_key= L;
    for (int i = L; i <= R; i++)
        if (abs(var) > abs(X - i))
        {
            var = X - i;
            var_key = i;
        }

    cout << var_key << '\n';
        
}
