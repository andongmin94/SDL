#include <iostream>

using namespace std;

class Something
{
public:
	static constexpr int s_value = 1;
};

// int Something::s_value = 1; // define in cpp 중복 선언 문제때문에 헤더 X

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	cout << &st1.s_value << " " << st1.s_value << endl;

	// st1.s_value = 2;

	cout << &st2.s_value << " " << st2.s_value << endl;
}