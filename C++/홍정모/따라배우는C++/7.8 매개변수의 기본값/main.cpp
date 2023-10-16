#include <iostream>
#include <string>

using namespace std;

// 매개변수의 기본값은 일반적으로 선언에 기입함
void print(int x = 10, int y = 20, int z = 30); // in header

void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

void print2(string str) {}
void print2(char ch = ' ') {}

void print3(int x) {}
void print3(int x, int y = 20) {}

int main()
{
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300);

	// char ch
	print2();

	// 모호함
	print3(10);
}