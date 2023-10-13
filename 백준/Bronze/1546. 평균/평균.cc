#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int* arr = new int[N];
    int max = -1;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << (double)sum / max * 100 / N;
}