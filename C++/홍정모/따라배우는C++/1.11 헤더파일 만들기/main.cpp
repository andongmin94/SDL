#include <iostream>
#include "add.h"
// 헤더가 다른 폴더에 있으면 그 루트도 표기해야함
// ex) "Myheaders/add.h"

// 선언과 정의는 헤더에 몰아넣지말고 분리해라.
// 안그러면 헤더를 여러번 쓸 때 문제가 됌.

using namespace std;

int main()
{
	cout << add(1, 2) << endl;
}