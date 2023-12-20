#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> a;
	int b, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> b;
		a.push_back(b);
		sum += a[i];
	}
	sort(a.begin(), a.end());
	cout << sum / a.size() << '\n';
	cout << a[2] << '\n';
}