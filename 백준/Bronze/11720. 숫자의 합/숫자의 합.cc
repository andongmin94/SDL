#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    char a;
    int sum = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> a;
        sum += a - 48;
    }
    cout << sum;
}