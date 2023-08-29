#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100001];
int res = 0;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
    {
        if (arr[i + 1] > arr[i + 2])
        {
            int a = min(arr[i], arr[i + 1] - arr[i + 2]);
            res += 5 * a;
            arr[i] -= a;
            arr[i + 1] -= a;

            int b = min(arr[i], min(arr[i + 1], arr[i + 2]));
            res += 7 * b;
            arr[i] -= b;
            arr[i + 1] -= b;
            arr[i + 2] -= b;
        }
        else
        {
            int a = min(arr[i], min(arr[i + 1], arr[i + 2]));
            res += 7 * a;
            arr[i] -= a;
            arr[i + 1] -= a;
            arr[i + 2] -= a;

            int b = min(arr[i], arr[i + 1]);
            res += 5 * b;
            arr[i] -= b;
            arr[i + 1] -= b;
        }
        res += 3 * arr[i];
    }
    cout << res << "\n";
    return 0;
}
