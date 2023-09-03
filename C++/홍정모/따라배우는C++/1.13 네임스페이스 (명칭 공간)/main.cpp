#include <iostream>

namespace Myspace1
{
	namespace InnerSpace
	{
		int doSomething(int a, int b)
		{
			return a + b;
		}
	}
}

namespace Myspace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;

int main()
{
	Myspace1::InnerSpace::doSomething(3, 4);
	using namespace Myspace1;
	InnerSpace::doSomething(3, 4);
	using namespace Myspace1::InnerSpace;
	doSomething(3, 4);

	//cout << Myspace1::doSomething(3, 4) << endl;
	//cout << Myspace2::doSomething(3, 4) << endl;
}