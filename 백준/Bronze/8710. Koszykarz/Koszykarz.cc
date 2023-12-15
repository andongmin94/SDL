#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	int cnt = 0;
	cin >> a >> b >> c;

	while (a < b)
	{
		a += c;
		cnt++;
	}
	cout << cnt << endl;
}