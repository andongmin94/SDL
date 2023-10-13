#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a != 0)
    {
        for (int i = 0; i < a; i++)
            cout << "*";
        cout << endl;
        a--;
    }
}