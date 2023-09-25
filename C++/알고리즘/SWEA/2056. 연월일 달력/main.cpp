#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string a;
        cin >> a;
        if (a[5] == '0')
            cout << "#" << i + 1 << " " << -1;
        else if (a[5] == '2' && ((a[6] == '2' && a[7] == '9') || a[6] == '3'))
            cout << "#" << i + 1 << " " << -1;
        else
        {
            cout << "#" << i + 1 << " ";
            for (int j = 0; j < 4; j++)
                cout << a[j];
            cout << '/' << a[4] << a[5] << '/' << a[6] << a[7];
        }
        cout << endl;
    }
}