#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, c;
	int b, d = 0;
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> c;
		if (a == c)
			d++;
	}
	cout << d;
}