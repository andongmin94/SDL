#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, max_ = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a,d,g, sum = 0;
        cin >> a >> d >> g;
        sum = a * ( d + g );
        if (a == (d+g))
            sum *= 2;
        max_ = max(max_, sum);
    }
    cout << max_;
}
