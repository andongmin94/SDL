#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int sum = 1;
    while (1)
    {
        sum += i * 6;
        if (sum - n >= i * 6)
            break;
        i += 1;
    }
    cout << i;
}
