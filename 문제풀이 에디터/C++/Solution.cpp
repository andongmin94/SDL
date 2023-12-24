#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int cnt = 0;
    vector<int> v1(26);
    vector<int> v2(26);
    for (const char e : a)
        v1[static_cast<int>(e - 'a')]++;
    for (const char e : b)
        v2[static_cast<int>(e - 'a')]++;
    for (int i = 0; i < 26; i++)
    {
        if (v1[i] >= v2[i])
            cnt += v1[i] - v2[i];
        else
            cnt += v2[i] - v1[i];
    }
    cout << cnt << '\n';
}
