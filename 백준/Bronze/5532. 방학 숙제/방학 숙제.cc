#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if (b % d != 0)
        b = b / d + 1;
    else b = b / d;
    if (c % e != 0)
        c = c / e + 1;
    else c = c / e;
    if (b > c)
        cout << a - b;
    else
        cout << a - c;
}