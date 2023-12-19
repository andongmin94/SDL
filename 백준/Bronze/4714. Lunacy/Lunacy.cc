#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (1)
	{
		double a;
		cin >> a;
		if (a < 0)
			break;
		double b = a * 0.167;
		cout << fixed;
		cout.precision(2);
		cout << "Objects weighing " << a << " on Earth will weigh " << b << " on the moon." << '\n';
	}
}