#include <iostream>

using namespace std;

char arr[3][5] = { 'D','A','C','C','D','S','D','F','A','E','E','E','T','J','H' };

int CHECK(char a)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			if (arr[i][j] == a)
				return 1;
	return 0;
}

int main()
{
	char a;
	cin >> a;
	if (CHECK(a) == 1)
		cout << "있음";
	else cout << "없음";
}