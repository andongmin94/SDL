#include <iostream>

using namespace std;

template<class T>
class A
{
private:
	T m_value;

public:
	A(const T& input)
		: m_value(input)
	{}

	template<typename TT>
	void doSomething(const TT& input)
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)m_value << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	A<int> a_int(123);
	a_int.print();

	a_int.doSomething<float>(123.4);
	// 파라미터로 구분이 가능하면 제네릭을 생략할 수 있음.
	// a_int.doSomething(123.4);

	cout << endl;

	A<char> a_char('A');
	a_char.doSomething(1);
	a_char.doSomething<int>(1);
	a_char.doSomething(1);
	a_char.doSomething(int());
	// 정의에 파라미터가 없어도 스페셜라이제이션이 가능함.
	// a_char.doSomething<int>();
}