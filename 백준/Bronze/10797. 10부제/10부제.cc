#include <iostream>

using namespace std;

int main()
{
    int a;
    int arr[5];
    int cnt = 0;
    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == a)
            cnt++;
    }
    cout << cnt;
}