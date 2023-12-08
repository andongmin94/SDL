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

    cout << k[2] + k[1] << endl;
}