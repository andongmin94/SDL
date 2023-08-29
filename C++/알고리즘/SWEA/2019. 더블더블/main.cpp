#include <iostream>

using namespace std;

int main()
{
    int a, b;
    a = 1;
    cin >> b;
    for (int i = 0; i <= b; i++)
    {
        cout << a << " ";
        a *= 2;
    }
}