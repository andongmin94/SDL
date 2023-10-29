#include <iostream>

using namespace std;

int main()
{
    long long a1, a2, a3, b, c;

    cin >> a1 >> a2 >> a3;

    b = static_cast<double>(a1 * a2) / a3;
    c = static_cast<double>(a1) / a2 * a3;

    if (b > c)
        cout << b;
    else
        cout << c;
}