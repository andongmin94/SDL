#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
		result *= base;

	return result;
}

int main()
{
	//for (unsigned int i = 9; i >= 0; --i)
	//	cout << i << endl; unsigned라서 0이 되면 에러 발생함.
}