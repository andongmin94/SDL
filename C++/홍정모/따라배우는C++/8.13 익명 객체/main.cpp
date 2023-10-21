﻿#include <iostream>

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

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	A a(1);
	a.print();

	A(2).print();
	A(3).print();
	A(4).print();

	cout << add(Cents(6), Cents(8)).getCents() << endl;
}