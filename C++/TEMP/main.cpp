#include <iostream>

using namespace std;

int main()
{
	int n, min = -1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a <= b && min < b)
			min = b;
	}
	cout << min;
}