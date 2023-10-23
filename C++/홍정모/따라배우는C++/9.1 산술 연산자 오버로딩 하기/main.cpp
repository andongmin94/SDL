#include <iostream>

using namespace std;

class Digit
{
private:
	int m_cents;

public:
	Digit(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	// = [] () ->
	Digit operator + (const Digit& c2)
	{
		return Digit(this->m_cents + c2.m_cents);
	}

	friend Digit operator + (const Digit& c1, const Digit& c2)
	{
		return Digit(c1.getCents() + c2.getCents());
	}
};

//void add(const Cents& c1, const Cents& c2, Cents& c_out)
//{
//	c_out.getCents() = c1.getCents() + c2.getCents();
//}

int main()
{
	Digit cents1(6);
	Digit cents2(8);

	//Cents sum;
	//add(cents1, cents2, sum);
	//cout << sum.getCents() << endl;

	//cout << add(cents1, cents2).getCents() << endl;

	cout << (cents1 + cents2 + Digit(6) + Digit(10) + Digit(20)).getCents() << endl;

	// ?: :: sizeof . .*
	// 연산자 간 우선순위는 변하지 않음.
}