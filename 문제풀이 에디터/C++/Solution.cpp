#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 0; i < s.size() - 3; i++)
    {
        if (s[i] == 'D')
            if (s[i+1] == 'K')
                if (s[i+2] == 'S')
                    if (s[i+3] == 'H')
                        cnt++;
    }

    cout << cnt;
}
