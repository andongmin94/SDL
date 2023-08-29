#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int sum = 0;

    while (T > 0)
    {
        int digit = T % 10;
        sum += digit;
        T /= 10;
    }

    cout << sum << endl;
}
