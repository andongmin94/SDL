#include <iostream>

using namespace std;

void BBQ(int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1;
}

void KFC(char b)
{
	for (int i = 0; i < 7; i++)
		cout << b;
}

int main()
{
	int a;
	cin >> a;
	if (a % 2 != 0)
	{
		int b;
		cin >> b;
		BBQ(b);
	}
	else
	{
		char b;
		cin >> b;
		KFC(b);
	}
}