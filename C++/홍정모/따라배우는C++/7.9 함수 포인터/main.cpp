#include <iostream>

using namespace std;

int func()
{
	return 5;
}

int main()
{
	// 함수도 포인터임. 그래서 아래는 주소가 찍힘
	cout << func << endl;

	// 주소로 가서 기능을 실행함
	cout << func() << endl;
}