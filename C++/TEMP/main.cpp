#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	if (a == 1010)
	{
		a = 10;
		b = 10;
	}
	else
	{
		if (a >= 100 && (a % 100) / 10 == 1)
		{
			a = a / 100;
			b = 10;
		}
		else
		{
			b = a % 10;
			a = a / 10;
		}
	}
	cout << a + b << endl;
}