#include <iostream>

using namespace std;

int main()
{
	// Decimal  : 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 012; //   0�� ���̸� 8������ �� (0�� octal ����)
	int y = 0xF; // 0x�� ���̸� 16������ ��  (x�� heXa ����)
	cout << x << endl;
	cout << y << endl;

	// 0011 1010 1111
	//		 --> 3A7F

	int z = 0b1010; // 0b�� ���̸� 2������ �� (b�� ���̳ʸ�)
	cout << z << endl;

	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;
}