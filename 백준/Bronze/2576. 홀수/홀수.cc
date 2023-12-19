#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> a;
	for (int i = 0; i < 7; i++)
	{
		int b; cin >> b;
		if (b % 2 != 0)
			a.push_back(b);
	}
	sort(a.begin(), a.end());
	int sum = 0;
	for (int i = 0; i < a.size(); i++)
		sum += a[i];
	if (sum != 0)
	{
		cout << sum << '\n';
		cout << a[0] << '\n';
	}
	else cout << -1;
}