#include <iostream>

using namespace std;

int main()
{
	int n, a, b, ans = 0x3f3f3f3f;

	cin >> n;
	while (n--)
	{
		cin >> a >> b;

		if (a <= b) ans = min(ans, b);

		if (n == 0) break;
	}

	if (ans == 0x3f3f3f3f)
		cout << -1;
	else
		cout << ans;
}