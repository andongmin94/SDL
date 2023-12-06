#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;

    string b;
    cin >> b;

    for (int i = a - 5; i < b.length(); i++)
        cout << b[i];
}