#include <iostream>

using namespace std;

int main()
{
	// Decimal  : 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 012; //   0을 붙이면 8진수가 됌 (0가 octal 느낌)
	int y = 0xF; // 0x를 붙이면 16진수가 됌  (x가 heXa 느낌)
	cout << x << endl;
	cout << y << endl;

	// 0011 1010 1111
	//		 --> 3A7F

	int z = 0b1010; // 0b를 붙이면 2진수가 됌 (b는 바이너리)
	cout << z << endl;

	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;
}