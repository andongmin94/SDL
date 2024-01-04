#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int height[500001] = {0,};
    stack<int> s;

    for (int i = 1; i <= n; i++)
    {
        cin >> height[i];
        while (!s.empty() && height[s.top()] < height[i])
            s.pop();

        if (!s.empty()) cout << s.top() + 1 << ' ';
        else cout << 0 << ' ';
        s.push(i);
    }
}
