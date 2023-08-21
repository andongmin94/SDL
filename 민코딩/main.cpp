#include <iostream>

using namespace std;

int KFC(int* arr)
{
    for (int i = 0; i < 5; i++)
        cout << arr[i];
}

int main()
{
    int arr[5];

    int oneminus;
    cin >> oneminus;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = oneminus;
        oneminus -= 1;
    }

    KFC(arr);
}