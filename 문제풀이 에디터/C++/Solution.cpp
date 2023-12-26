#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    list<int> v;
    for (int i = 0; i < a; i++)
        v.push_back(i + 1);

    list<int>::iterator v2 = v.begin();
    cout << "<";
    while(v.size() != 0)
    {
        for(int i = 0; i < b - 1; i++)
        {
            if (v2 == v.end())
                v2 = v.begin();
            v2++;
            if (v2 == v.end())
                v2 = v.begin();
        }
        cout << *v2;
        v2 = v.erase(v2);
        if(v.size() != 0)
            cout << ", ";
    }
    cout << ">";
}
