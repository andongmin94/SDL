#include <iostream>

using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm Base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		cout << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{}

	void print()
	{
		Base::print();
		cout << "I'm Derived" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b);
		cout << "This is derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(10);
	base.print();
	cout << endl;

	Derived derived(20);
	derived.Base::print();
	cout << endl;

	derived.print();
	cout << endl;

	cout << base;
	cout << endl;

	cout << static_cast<Base>(derived);
	cout << endl;

	cout << derived;
}