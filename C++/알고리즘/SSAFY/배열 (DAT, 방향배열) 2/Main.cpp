#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	char str[100] = "ACBIKETLAAAAABBBIIK";

	int DAT[256][256] = {0,};
	// index : 문자 -> value : 존재하는가?
	//						 + 개수
	//						 => 어느 위치에 존재하는가?
	// data를 2개씩 활용한다면

	for (int i = 1; str[i]; i++)
		DAT[str[i-1]][str[i]]++; // str[i]문자의 개수를 기록

	cout << DAT['A']['A'] << '\n';
	cout << DAT['I']['K'] << '\n';
	cout << DAT['L']['A'] << '\n';
	cout << DAT['X']['X'] << '\n';
}