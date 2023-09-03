#include <iostream>

using namespace std;

int main()
{
	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;
	auto aValue = 2;

	//cout << sizeof(bool) << endl;
	//cout << sizeof(bValue) << endl;

	int i = (int)3.1415;    // copy initialization
	int a(123);			 //  direct initialization
	int b{ 123 };		 // uniform initialization

	int k = 0, l(123), m{ 456 };
}