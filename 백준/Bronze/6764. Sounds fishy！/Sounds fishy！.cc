#include<iostream>

using namespace std;

int main()
{
    int a, b;

    int rising = 0;
    int down = 0;
    int same = 0;
    cin >> b;

    a = b;

    for (int i = 0; i < 3; i++)
    {
        cin >> b;
        if (b > a)
            rising++;
        if (b < a)
            down++;
        if (b == a)
            same++;
        a = b;
    }
    if (rising == 3)
        cout << "Fish Rising" << endl;
    else if (down == 3)
        cout << "Fish Diving" << endl;
    else if (same == 3)
        cout << "Fish At Constant Depth" << endl;
    else
        cout << "No Fish" << endl;

}