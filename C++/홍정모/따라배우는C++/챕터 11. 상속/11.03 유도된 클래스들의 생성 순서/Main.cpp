#include <iostream>

using namespace std;

class Mother
{
protected:
	int m_i;

public:
	Mother(const int& i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother Construction" << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		: Mother(1024), m_d(1.0)
	{
		//this->m_i = 10;
		//Mother::m_i = 1024;
		//this->Mother::m_i = 2048;

		cout << "Child Construction" << endl;
	}
};

class A
{
public:
	A()
	{
		cout << "A 생성자" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B 생성자" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C 생성자" << endl;
	}
};


int main()
{
	Child();

	C();
}