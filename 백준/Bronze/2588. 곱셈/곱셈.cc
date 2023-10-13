#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	int b_100, b_10, b_1;

	b_100 = b / 100;
	b_10 = b / 10 % 10;
	b_1 = b % 100 % 10;
	cout << a * b_1 << endl;
	cout << a * b_10 << endl;
	cout << a * b_100 << endl;
	cout << (a * b_1) + (a * b_10 * 10) +  (a * b_100 *100) << endl;
    
	return 0;
}