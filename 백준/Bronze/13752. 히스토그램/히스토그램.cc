#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		for (int j = 0; j < b; j++)
			cout << "=";
		cout << endl;
	}
}
