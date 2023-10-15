#include <iostream>

using namespace std;

int min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;

	if (b <= a && b <= c)
		return b;

	if (c <= a && c <= b)
		return c;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c >= 100)
		cout << "OK";
	else
		if (min(a, b, c) == a)
			cout << "Soongsil";
		else if (min(a, b, c) == b)
			cout << "Korea";
		else
			cout << "Hanyang";
}