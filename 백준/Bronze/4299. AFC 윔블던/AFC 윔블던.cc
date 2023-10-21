#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b;

	c = (a + b) / 2;
	d = (a - b) / 2;
	if (a < b)
		cout << -1 << endl;
	else
	{
		if (c + d == a && c - d == b)
			cout << c << " " << d;
		else
			cout << "-1";
	}
}