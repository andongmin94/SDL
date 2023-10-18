#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		char Si[21];
		cin >> Si;
		for (int j = 0; Si[j] != 0; j++)
			if (Si[j] >= 'A' && Si[j] <= 'Z')
				Si[j] = Si[j] - 'A' + 'a';
		cout << Si << endl;
	}
}