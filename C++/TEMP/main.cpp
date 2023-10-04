#include <iostream>

using namespace std;

void isExist(char (*arr)[7], char a, char b)
{
	bool a_check = false;
	bool b_check = false;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == a)
				a_check = true;
			if (arr[i][j] == b)
				b_check = true;
		}
	if (a_check == true)
		cout << a << " : 존재" << endl;
	else cout << a << " : 없음" << endl;
	if (b_check == true)
		cout << b << " : 존재" << endl;
	else cout << b << " : 없음" << endl;
}

int main()
{
	char arr[2][7] = { "A79TKQ","MINCOD" };
	char a, b;
	cin >> a >> b;
	isExist(arr, a, b);
}