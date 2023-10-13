#include<iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int arr[10];
        int sum = 0;
        
        for (int j = 0; j < 10 ; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 == 1)
                sum += arr[j];
        }
        cout << "#" << i + 1 << " " << sum << endl;
    }
}