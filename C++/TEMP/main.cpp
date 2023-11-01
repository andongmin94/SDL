#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int chicken = 0;

	while (1)
	{
		if (a == 0 || b == 0 && c == 0 || b == 1 && c == 0)
			break;

		if (b != 0 && b != 1)
		{
			a--;
			b -= 2;
			chicken++;
		}

		if (a == 0)
			break;

		if (c != 0)
		{
			a--;
			c--;
			chicken++;
		}
	}

	cout << chicken;
}