#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, p;
    cin >> a >> p;
    if (a * 7 > p * 13)
        cout << "Axel";
    else if (a * 7 == p * 13)
        cout << "lika";
    else cout << "Petra";    
}
