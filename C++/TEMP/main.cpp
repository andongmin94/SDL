#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool check = true;

	if (a == 8 || a == 9)
		check = false;

	if (check == false && b == c)
		check = false;
	else check = true;

	if (check == false && d == 8 || d == 9)
		check = false;
	else check = true;

	if (check == true)
		cout << "answer";
	else cout << "ignore";
}