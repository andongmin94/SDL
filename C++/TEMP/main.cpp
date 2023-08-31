#include <iostream>

using namespace std;

int a, b;

void BBQ()
{
	cout << "ÇÕ:" << a + b << endl;
	cout << "Â÷:" << a - b << endl;
	cout << "°ö:" << a * b << endl;
	cout << "¸ò:" << a / b << endl;
}

int main()
{
	cin >> a >> b;
	BBQ();
}