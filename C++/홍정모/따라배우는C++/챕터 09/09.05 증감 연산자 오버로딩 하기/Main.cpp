#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;

public:
	Digit(int digit = 0) : m_digit(digit) {}

	// prefix
	Digit& operator ++ ()
	{
		++m_digit;

		return *this;
	}

	// postfix
	Digit operator ++ (int)
	{
		// 후위 연산자라서
		// 먼저 임시값을 보내고
		// 이후 1을 증가시키는 것으로 구현
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;
	cout << d++ << endl;
	cout << d << endl;
}