#include <iostream>

using namespace std;

int a, b;

void BBQ()
{
	cout << "��:" << a + b << endl;
	cout << "��:" << a - b << endl;
	cout << "��:" << a * b << endl;
	cout << "��:" << a / b << endl;
}

int main()
{
	cin >> a >> b;
	BBQ();
}