#include <iostream>
#include <algorithm>
using namespace std;

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE
// 전처리기는 해당 파일 안에서만 효력이 있음.
// 그래서 함수 바디를 다른 cpp파일에 정의하고
// 전처리기를 사용하면 오류가 발생함.

int main()
{
	//cout << MAX(1 + 3, 2) << endl;
	//cout << max(1 + 3, 2) << endl;

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif
}