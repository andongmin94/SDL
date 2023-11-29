#include<iostream>

using namespace std;

int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int b, c, d;
    cin >> b >> c >> d;

    int result = 0;

    for (int i = 0; i < 4; i++)
    {
        if (a[i] == b)
            result = i + 1;
    }

    cout << result << endl;
}