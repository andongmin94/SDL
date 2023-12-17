#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base* base = &d1;

	//auto* base_to_d1 = dynamic_cast<Derived1*>(base);
	//cout << base_to_d1->m_j << endl;

	//base_to_d1->m_j = 256;
	//cout << d1.m_j << endl;;

	
	auto* base_to_d2 = dynamic_cast<Derived2*>(base);

	// dynamic_cast는 실패시 널포인터를 넣음
	if (base_to_d2 !=  nullptr)
		cout << base_to_d2->m_name << endl;
	else
		cout << "Failed" << endl;


	// static_cast는 에러 체크를 안해서 문제 발생 여지가 있음
	auto* base_to_d1 = dynamic_cast<Derived1*>(base);

	if (base_to_d1 != nullptr)
		base_to_d1->print();
	else
		cout << "Failed" << endl;

}