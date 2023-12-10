#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a;
	cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		vector<int> b;
		int c;
		cin >> c;
		b.push_back(c);
		cin >> c;
		b.push_back(c);
		cin >> c;
		b.push_back(c);

		sort(b.begin(), b.end());
		cout << b[0] << endl;
	}
}