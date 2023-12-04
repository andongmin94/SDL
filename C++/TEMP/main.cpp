#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        char a;
        cin >> a;
        if (a == 'W')
            cnt++;
    }
    if (cnt >= 5)
        cout << 1 << endl;
    else if (cnt >= 3)
        cout << 2 << endl;
    else if (cnt >= 1)
        cout << 3 << endl;
    else cout << -1 << endl;
}