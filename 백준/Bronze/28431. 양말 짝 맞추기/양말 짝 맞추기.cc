#include <iostream>

using namespace std;

int main()
{
    int arr[10] = { 0, };

    for (int i = 0; i < 5; i++)
    {
        int b;
        cin >> b;
        arr[b]++;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        if (arr[i] % 2 != 0)
            cout << i;
}