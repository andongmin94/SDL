#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 3; i++)
	{
		int a = 0;
		for (int j = 0; j < 4; j++)
		{
			int b;
			cin >> b;
			a += b;
		}
		switch (a)
		{
			case 0 :
				cout << "D" << '\n';
				break;
			case 1 :
				cout << "C" << '\n';
				break;
			case 2 :
				cout << "B" << '\n';
				break;
			case 3 :
				cout << "A" << '\n';
				break;
			case 4:
				cout << "E" << '\n';
				break;
		}
	}
}