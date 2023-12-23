#include <iostream>

using namespace std;

void RecurFunc(int count)
{
	if (count == 0) // <- 종료 조건
		return;

	// RecurFunc(count - 1); // <- 변경

	cout << count << endl;

	RecurFunc(count - 1); // <- 변경

	// 실행 위치에 따라 결과가 달라집니다.
}

int main()
{
	// Func1(); // 이름이 다른 함수 호출

	RecurFunc(5); // 이름이 같은 함수 호출

	return 0;
}