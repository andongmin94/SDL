#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string A, B;
		cin >> A >> B;
		int cnt = 0;
		while (A.find(B) != -1)
		{
			int same = A.find(B);
			A.erase(same, B.length());
			cnt++;
		}
		cout << "#" << i + 1 << " " << A.length() + cnt << endl;
	}
}