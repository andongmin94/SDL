#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d;
	e = (b / d) * (c / d);
	if (e <= a)
		cout << e << endl;
	else
		cout << a << endl;
}