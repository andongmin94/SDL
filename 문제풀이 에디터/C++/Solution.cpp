#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        q.push(i + 1);

    while(q.size() != 1)
    {
        q.pop();
        if (q.size() == 1) break;
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}
