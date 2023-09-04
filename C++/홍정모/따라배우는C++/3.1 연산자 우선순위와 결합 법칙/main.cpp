#include <iostream>

using namespace std;

int main()
{
	int x = 3 * 4 / 2; // 동일 우선 순위에서는 L 2 R
	double y = std::pow(2, 3);
	
	cout << y;
}