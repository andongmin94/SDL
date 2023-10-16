#include <iostream>
#include <string>

using namespace std;

// 레퍼런스로 오버로딩하면 만들기 쉬움
void getRandom(int& x) {};
void getRandom(double& x) {};

typedef int my_int;
// 이러면 같은 함수임
void print(int x) {}
void print(my_int x) {}

void print(const char* value) {}
void print(int value) {}

// 모호하면 구분을 못함
void print(unsigned int value) {}
void print(float value) {}

int main()
{
	int x;
	getRandom(x);
	// int x = getRandomInt(x);
	// int x = getRandom(int());

	print((unsigned int)'a');
	print(0u);
	print(3.14159f);
}