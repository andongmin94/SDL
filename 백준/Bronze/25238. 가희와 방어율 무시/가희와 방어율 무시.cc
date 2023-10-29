#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	a = a * (100 - b) / 100;
	if (a >= 100)
		cout << 0;
	else
		cout << 1;
}