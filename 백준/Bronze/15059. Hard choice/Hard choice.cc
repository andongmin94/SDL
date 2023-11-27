#include<iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;
    a = a2 - a;
    if (a < 0)
        a = 0;
    b = b2 - b;
    if (b < 0)
        b = 0;
    c = c2 - c;
    if (c < 0)
        c = 0;
    cout << a + b + c;
}