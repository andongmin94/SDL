#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int A, B;
        cin >> A >> B;
        vector<int> arrA, arrB;

        for (int i = 0; i < A; i++)
        {
            int n;
            cin >> n;
            arrA.push_back(n);
        }

        for (int i = 0; i < B; i++)
        {
            int n;
            cin >> n;
            arrB.push_back(n);
        }
        sort(arrA.begin(), arrA.end());
        sort(arrB.begin(), arrB.end());
        int a = 0;
        int res = 0;
        while (!(arrA.empty() || arrB.empty()))
        {
            a = arrA.back();
            arrA.pop_back();
            if (a <= arrB.back())
            {
                arrB.pop_back();
                res += a;
            }
        }
        cout << "#" << t + 1 << " " << res << endl;
    }
}