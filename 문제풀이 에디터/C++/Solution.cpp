#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        int y;
        cin >> x;
        if (x == "push")
        {
            cin >> y;
            a.push(y);
        }
        else if (x == "top")
        {
            if(a.empty())
                cout << -1 << '\n';
            else
                cout << a.top() << '\n';
        }
        else if (x == "size")
            cout << a.size() << '\n';
        else if (x == "pop")
        {
            if(a.empty())
                cout << -1 << '\n';
            else
            {
                cout << a.top() << '\n';
                a.pop();
            }
        }
        else if (x == "empty")
        {
            if(a.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }
}
