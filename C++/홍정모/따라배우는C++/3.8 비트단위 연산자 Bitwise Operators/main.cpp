#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// << left shift
	// >> right shift
	// ~, &, |, ^

	//int a = 3;

	//cout << std::bitset<8>(a) << " " << a <<endl;

	//cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	//cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	//cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;

	//int a = 1024;

	//cout << std::bitset<16>(a) << endl;
	//cout << std::bitset<16>(~a) << " " << (~a) << endl;

	int a = 0b1100;
	int b = 0b0110;

	//cout << a << " " << b << endl;
	cout << std::bitset<4>(a & b) << endl;
	cout << std::bitset<4>(a | b) << endl;
	cout << std::bitset<4>(a ^ b) << endl;

	a &= b;
	cout << a;
}