#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	// 소멸자에서는 예외를 던질 수 없다.
	~A()
	{
		throw "error";
	}
};

int main()
{
	try
	{
		//int* i = new int[1000000];
		//unique_ptr<int> up_i(i);

		//// do something with i
		//throw "error";	

		////delete[] i;

		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}
}