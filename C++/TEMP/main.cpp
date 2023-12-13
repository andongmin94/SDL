#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> a;
	int b;
	cin >> b;
	a.push_back(b);
	cin >> b;
	a.push_back(b);
	cin >> b;
	a.push_back(b);
	sort(a.begin(), a.end());
	cout << a[0] << endl;
}