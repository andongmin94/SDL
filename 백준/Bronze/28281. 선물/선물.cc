#include <bits/stdc++.h>

using namespace std;

int arr[100001] = {0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    
    cin >> n >> x;
    
    long long min_ = numeric_limits<long long>::max();
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
        min_ = min(min_, 1LL * x * (arr[i-1] + arr[i])); // long long 형식으로 형변
    cout << min_;
}