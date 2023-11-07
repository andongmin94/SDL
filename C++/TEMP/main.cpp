#include <iostream>
#include <string>

using namespace std;

long long recur(long long a)
{
	if (a >= 0 || a < 9)
		return -1;
	long long b = a;
	int c = 1;
	while (a > 9)
	{
		a /= 10;
		c++;
	}
	if (b == (a * c))
		return 0;
	return recur(a * c);
}

int main()
{
	long long a;
	cin >> a;
	if (recur(a) == -1)
		cout << "NFA";
	else
		cout << "FA";

}