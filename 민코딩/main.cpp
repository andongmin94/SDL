#include <iostream>

using namespace std;


int arr[5];
int arr2[5];

void PrintAll()
{
    for(int i = 0; i < 5; i++)
        cout << arr[i];
    cout << endl;
    for(int i = 0; i < 5; i++)
        cout << arr2[i];
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 5; i++)
        arr[i] = a;
    for (int i = 0; i < 5; i++)
        arr2[i] = b;

    PrintAll();
}