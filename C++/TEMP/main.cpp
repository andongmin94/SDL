#include <iostream>

using namespace std;

int main()
{
	char arr1[10];
	char arr2[10];
	char arr3[10];
	cin >> arr1 >> arr2 >> arr3;

	bool check = true;
	for (int i = 0; arr1[i] != 0; i++)
		if (arr1[i] != arr2[i] || arr2[i] != arr3[i])
			check = false;
	if (check == true)
		cout << "YES";
	else cout << "NO";
}