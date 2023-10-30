#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int time = 0;
	while (a < b)
	{
		if (a < 0)
			time += c;
		if (a >= 0)
			time += e;
		if (a == 0 && time > 0)
			time += d;
		a++;
	}
	cout << time;
}