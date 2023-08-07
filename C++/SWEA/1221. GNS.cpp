#include <iostream>
#include <string>

using namespace std;

enum number
{
	ZRO = 0,
	ONE,
	TWO,
	THR,
	FOR,
	FIV,
	SIX,
	SVN,
	EGT,
	NIN,
};

int main()
{
	int T, tc;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int arr[10000] = {};
		string s_tc;
		cin >> s_tc >> tc;
		for (int j = 0; j < tc; j++)
		{
			cin >> arr[j];
		}
		for (int j = 0; j < tc; j++)
		{
			cout << (number)arr[j] << " ";
		}
		cout << endl;
	}
	
}