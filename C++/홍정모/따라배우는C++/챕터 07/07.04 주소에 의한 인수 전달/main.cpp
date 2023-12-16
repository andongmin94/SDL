#include <iostream>

using namespace std;

void foo(int* arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;

	arr[0] = 1.0;
	// 포인터를 const로 막을 때는
	// const int * 과 int* const의 형태처럼
	// const의 위치를 확인
}

int main()
{
	
}