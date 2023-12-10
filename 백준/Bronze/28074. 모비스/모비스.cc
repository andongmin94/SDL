#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;

    int m = 0;
    int o = 0;
    int b = 0;
    int i = 0;
    int s = 0;


    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] == 'M')
            m++;
        if (a[j] == 'O')
            o++;
        if (a[j] == 'B')
            b++;
        if (a[j] == 'I')
            i++;
        if (a[j] == 'S')
            s++;
    }

    if (m > 0 && o > 0 && b > 0 && i > 0 && s > 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}