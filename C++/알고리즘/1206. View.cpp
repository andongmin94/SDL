#include <iostream>

using namespace std;

int max(int a, int b, int c, int d)
{
    if (a >= b && a >= c && a >= d)
        return a;
    if (b >= a && b >= c && b >= d)
        return b;
    if (c >= a && c >= b && c >= d)
        return c;
    if (d >= a && d >= b && d >= c)
        return d;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        int N, H;
        cin >> N;
        int* arr = new int[N];
        H = 0;
        
        for (int j = 0; j < N; j++)
            cin >> arr[j];
        
        for (int k = 2; k < N - 2; k++)
        {
            int max_for_compare = max(arr[k - 2], arr[k - 1], arr[k + 1], arr[k + 2]);
            if (arr[k] > max_for_compare)
                H += arr[k] - max_for_compare;
        }
        
        cout << "#" << i + 1 << " " << H << endl;
        delete[] arr;
    }
}