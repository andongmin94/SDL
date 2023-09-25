#include <iostream>

int main()
{
    using namespace std;

    int N, M;
    cin >> N >> M;
    int* arr = new int[N];

    for (int n = 0; n < N; n++)
        arr[n] = n + 1;

    for (int n = 0; n < M; n++)
    {
        int i, j, temp;
        cin >> i >> j;
        // n(n+1)/2 로 역순으로 뒤집는건데
        // 인덱스 때문에 (j - 1 + 1) / 2 의 형태임.
        for (int k = 0; k < (j - i + 1) / 2; k++)
        {
            temp = arr[i - 1 + k];
            arr[i - 1 + k] = arr[j - 1 - k];
            arr[j - 1 - k] = temp;
        }
    }

    for (int n = 0; n < N; n++)
        cout << arr[n] << " ";

    delete[] arr;
}