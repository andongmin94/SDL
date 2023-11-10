#include<iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f;

    if (b < e)
        g = d - a;
    else if (b == e && c <= f)
        g = d - a;
    else
        g = d - a - 1;

    h = d - a + 1;

    i = d - a;

    cout << g << endl << h << endl << i;
}