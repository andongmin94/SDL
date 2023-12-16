#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

int main()
{
	// numeric conversion
	cout << 5u - 10u;

	// C++ st
	int i = int(4.0);

	// C st
	int j = (int)4.0;

	// Modern st

	int k = static_cast<int>(4.0);

	//cout << std::setprecision(12) << i << endl;
}