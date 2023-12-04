#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, i2;
    string j;
    cin >> i;
    i2 = i;
    for (int k = 0; k < i; k++)
    {
        cin >> j;
        if (j.length() == 4 && j[2] == '9' && j[3] != '0')
            i2--;
        else if (j.length() >= 5)
            i2--;
    }
    cout << i2 << endl;
}