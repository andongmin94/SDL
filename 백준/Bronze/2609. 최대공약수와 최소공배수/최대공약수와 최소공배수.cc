#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int max_v = -1;
    int min_v = -1;
    int k = 1;
    while (1)
    {
        if (min_v != -1 && max_v != -1)
            break;
        if (a % k == 0 && b % k == 0)
            max_v = k;
        if (k % a == 0 && k % b ==0)
            min_v = k;
        k++;
    }
    cout << max_v << endl;
    cout << min_v << endl;
}