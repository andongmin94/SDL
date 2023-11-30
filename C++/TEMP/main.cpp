#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b * 2 + c * 3 >= 10)
        cout << "happy" << endl;
    else cout << "sad" << endl;
}