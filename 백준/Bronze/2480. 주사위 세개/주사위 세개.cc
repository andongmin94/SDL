#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int A, B, C;
	int value = 0;

	cin >> A >> B >> C;

	if (A == B && B == C)
		value = 10000 + A * 1000;
	else if (A == B)
		value = 1000 + A * 100;
	else if (A == C)
		value = 1000 + A * 100;
	else if (B == C)
		value = 1000 + B * 100;
	else
		value = std::max(std::max(A, B), C) * 100;

	cout << value << endl;

	return 0;
}