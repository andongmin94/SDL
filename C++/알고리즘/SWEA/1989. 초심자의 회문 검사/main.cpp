#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
	using namespace std;

	int T;
	cin >> T;
	string* N = new string[T];
	string* N_reverse = new string[T];
	for (int i = 0; i < T; i++)
	{
		cin >> N[i];
		N_reverse[i] = N[i];
	}
	for (int i = 0; i < T; i++)
	{
		reverse(N_reverse[i].begin(), N_reverse[i].end());
		if (N[i] == N_reverse[i])
			cout << "#" << i + 1 << " " << 1 << endl;
		else
			cout << "#" << i + 1 << " " << 0 << endl;
	}


}