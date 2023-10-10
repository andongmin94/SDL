#include <iostream>

using namespace std;

void doSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	int x = 5;
	int& ref_x = x;

	const int& ref_2 = ref_x;

	const int& ref = 3 + 4;

	cout << ref << endl;
	cout << &ref << endl;
	int a = 1;
	doSomething(a);
	doSomething(1);
	doSomething(a + 1);
}