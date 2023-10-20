#include<iostream>

using namespace std;

int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0)
			break;

		a *= a;
		b *= b;
		c *= c;

		if (a + b == c || a + c == b || b + c == a)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}