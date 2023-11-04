#include <iostream>

using namespace std;

class Base
{
public:
	Base() {}
	// 연산자 오버로딩은 프렌드 함수를 쓰다보니
	// 멤버 함수가 아님, 그래서 오버로딩이 안됌
	// 그래서 멤버 함수를 내부적으로 쓰고 그 멤버 함수를 오버로딩함.
	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		return b.print(out);
	}

	virtual std::ostream& print(std::ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived() {}

	virtual std::ostream& print(std::ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

int main()
{
	Base b;
	cout << b << endl;
	cout << endl;

	Derived d;
	cout << d << endl;
	cout << endl;

	Base& bref = d;
	cout << bref << endl;
	cout << endl;
}