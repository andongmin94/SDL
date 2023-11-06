#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public:
	void doSomething()
	{
		cout << typeid(T).name << endl;
	}

	void test()
	{}
};

int main()
{

}