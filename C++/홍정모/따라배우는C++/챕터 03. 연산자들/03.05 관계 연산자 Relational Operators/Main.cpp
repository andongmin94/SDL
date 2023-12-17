#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	const double epsilon = 1e-10;

	if (abs(d1 - d2) < epsilon)
		cout << "equal";
	else
		cout << "Not equal";
}