#include <iostream>
int main()
{
    using namespace std;

    int N, M;
    cin >> N >> M;
    int* arr= new int[N];
    
    for (int n = 0; n < N; n++)
        arr[n] = n + 1;

    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        int temp;
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
    
    for (int j = 0; j < N; j++)
        cout << arr[j] << " ";

    delete[] arr;
}