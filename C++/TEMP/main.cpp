#include<iostream>

using namespace std;

int main()
{
    int k, sum = 0;
    int a, b, c;
    cin >> k >> a >> b >> c;
    if (k - a >= 0)
        sum += a;
    else
        sum += k;
    if (k - b >= 0)
        sum += b;
    else
        sum += k;
    if (k - c >= 0)
        sum += c;
    else
        sum += k;
    cout << sum << endl;
}