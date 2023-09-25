#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = numeric_limits<short>::min();
	cout << s << endl;
	s--;
	cout << s << endl;
}