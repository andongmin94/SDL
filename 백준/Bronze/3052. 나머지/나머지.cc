#include <iostream>
#include <set>

using namespace std;

int main()
{
	int arr[10];
	set<int> res;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
		res.insert(arr[i]);
	}
	cout << res.size();
}