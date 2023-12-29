#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        char b;
        cin >> a >> b;
        for (int j = 0; j < a; j++)
            cout << b;
        cout << '\n';
    }
}
