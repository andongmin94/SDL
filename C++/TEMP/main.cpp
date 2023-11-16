#include<iostream>

using namespace std;

int main() {

    long a, b, c;
    cin >> a >> b >> c;

    if (a % c == 0)
        a = a / c;
    else
        a = a / c + 1;

    if (b % c == 0)
        b = b / c;
    else
        b = b / c + 1;

    cout << a * b;
}