#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    vector<int> k;
    k.push_back(a);
    k.push_back(b);
    k.push_back(c);
    sort(k.begin(), k.end());

    if (a == b && b == c)
         cout << 2 << endl;
    else if (k[0] * k[0] + k[1] * k[1] == k[2] * k[2])
         cout << 1 << endl;
    else cout << 0 << endl;
}