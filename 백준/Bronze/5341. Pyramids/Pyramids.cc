#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c;
    while (cin >> c)
    {
        int sum = 0;
        for (int i = 1; i <= c; i++)
            sum += i;
        if (sum == 0)
            break;
        cout << sum << endl;
    }
}
