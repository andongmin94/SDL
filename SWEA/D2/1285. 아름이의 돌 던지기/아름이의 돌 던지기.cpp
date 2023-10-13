#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int cnt = 0;
        int min = 100000;
        int* arr = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                arr[i] = arr[i] * -1;
            if (min > arr[i])
                min = arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (min == arr[i])
                cnt++;
        }
        cout << "#" << i + 1 << " " <<  min << " " << cnt << endl;
    }
}