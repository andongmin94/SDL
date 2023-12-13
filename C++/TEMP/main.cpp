#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	long double a;
	cin >> a;
	cout << fixed << setprecision(9);
	cout << sqrt(a) * 4 << '\n';
}