#include <iostream>

using namespace std;

char arr[2][3] = { 'F','E','W','D','C','A' };

bool findCh(char target)
{
	bool count = false;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			if (arr[i][j] == target)
				count = true;
	return count;
}	

int main()
{
	char a;
	cin >> a;
	if (findCh(a))
		cout << "발견";
	else
		cout << "미발견";
}