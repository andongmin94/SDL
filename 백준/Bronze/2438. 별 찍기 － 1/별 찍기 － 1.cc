#include <iostream>

using namespace std;

int main()
{
	int starNum;

	cin >> starNum;

	for (int i = 1; i <= starNum; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}