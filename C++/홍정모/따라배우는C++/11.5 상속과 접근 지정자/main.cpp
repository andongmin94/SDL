#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;

protected:
	int m_protected;

private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		m_public = 1024;
		m_protected = 1024;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		m_public;
	}
};

int main()
{
	Derived derived;
	derived.m_public = 1024;
}