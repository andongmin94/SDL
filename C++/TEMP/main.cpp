#include <iostream>

using namespace std;

int main()
{
	long long a;
	cin >> a;
	a %= 8;
	
	if (a == 1)
		cout << 1;
	else if (a == 0 || a == 2)
		cout << 2;
	else if (a == 3 || a == 7)
		cout << 3;
	else if (a == 4 || a == 6)
		cout << 4;
	else
		cout << 5;
}