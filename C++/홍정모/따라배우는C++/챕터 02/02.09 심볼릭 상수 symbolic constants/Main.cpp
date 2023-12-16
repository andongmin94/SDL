#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
	int n = my_number;

	cout << n << endl;
}

int main()
{
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;
}