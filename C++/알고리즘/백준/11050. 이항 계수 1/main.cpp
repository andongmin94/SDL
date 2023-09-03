#include <iostream>

using namespace std;

int recur(int n)
{
	if (n <= 1)
		return 1;

	return n * recur(n - 1);
}

int main()
{
	int N, K;
	cin >> N >> K;
	cout << recur(N) / (recur(K) * recur(N - K));
}