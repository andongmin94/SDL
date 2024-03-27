#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    deque<char> d;

    for (auto e : s) d.push_back(e);
    d.pop_front();
    d.pop_back();

    if (s[0] == '"' && s[s.size()-1] == '"' & s.size() > 2) for (auto e : d) cout << e;
    else cout << "CE";
}