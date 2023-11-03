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
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;

	
	// 부모에서는 사용가능하지만 자식에서는 접근 불가
private:
	using Base::print; // do not add ()
	void print() = delete;
};

int main()
{
	Derived derived(10);
	derived.m_i = 1024;
	derived.print();

	Base base(5);
	base.print();
}