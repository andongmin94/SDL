#include <iostream>

using namespace std;

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	cout << boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(1, 3) << endl;


	if (0)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}