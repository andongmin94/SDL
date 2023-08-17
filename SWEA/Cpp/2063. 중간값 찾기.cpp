#include <iostream>

using namespace std;

void bubble_sort(int a[], int T)
{
    for (int i = T - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;

    int* a = new int[T];
    
    for (int i = 0; i < T; i++)
        cin >> a[i];
    
    bubble_sort(a, T);
    cout << a[T / 2] << endl;
}
