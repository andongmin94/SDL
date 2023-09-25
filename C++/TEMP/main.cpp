#include <iostream>

using namespace std;

int main()
{
    char arr[10];
    cin >> arr;
    int range = 0;
    int stack = 0;
    for (int i = 0; arr[i] != 0; i++)
    {
        if (i % 2 == 0 && arr[i] >= 'A' && arr[i] <= 'Z')
            stack++;
        if (i % 2 != 0 && arr[i] >= 'a' && arr[i] <= 'z')
            stack++;
        range++;
    }
    if (range == stack)
    {
        cout << "개구리문장";
    }
    else cout << "일반문장";
}
