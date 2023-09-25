#include <iostream>

using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int* arr = new int[N];
        int max = 0;

        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
            if (arr[j] > max)
                max = arr[j];
        }

        int min = arr[0];

        for (int l = 0; l < N; l++)
        {
            if (arr[l] < min)
                min = arr[l];
        }

        delete[] arr;
        cout << "#" << i + 1 << " " << max - min << endl;
    }
}