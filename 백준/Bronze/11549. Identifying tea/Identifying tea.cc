#include <iostream>

using namespace std;

int main()
{
	int a, b[5], c = 0, d = 0;
	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
		if (a == b[i])
			c++;
	}
	cout << c;
}