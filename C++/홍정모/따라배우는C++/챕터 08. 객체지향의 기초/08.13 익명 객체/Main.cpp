#include <iostream>

using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor " << m_value << endl;
	}

	~A()
	{
		cout << "Destructor " << m_value << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

class Digit
{
private:
	int m_cents;

public:
	Digit(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Digit add(const Digit& c1, const Digit& c2)
{
	return Digit(c1.getCents() + c2.getCents());
}

int main()
{
	A a(1);
	a.print();

	A(2).print();
	A(3).print();
	A(4).print();

	cout << add(Digit(6), Digit(8)).getCents() << endl;
}