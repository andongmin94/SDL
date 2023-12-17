#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double* ptr)
{
	cout << "address of pointer variable in doSomething()" << &ptr << endl;
	if (ptr != nullptr)
	{
		//do somthing useful
		cout << *ptr << endl;
	}
	else
	{
		//do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double* ptr = nullptr; // moder c++

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;
	doSomething(&d);

	ptr = &d;
	doSomething(ptr);

	nullptr_t nptr; // 걍 0 넣으면 되는거 아닌가 싶음

	cout << "address of pointer variable in main()" << &ptr << endl;
}