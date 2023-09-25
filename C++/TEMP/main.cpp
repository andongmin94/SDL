#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int logic = a + b;
    for (int i = 0; i < c; i++)
    {
        for (int j = a; j < logic; j++)
            cout << j << " ";
        cout << endl;
    }
}