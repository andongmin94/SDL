#include <iostream>

using namespace std;

namespace work1
{
	namespace work11
	{
		int a = 1;
		void doSomething()
		{
			a += 3;
		}
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}


int main()
{
	work1::work11::a;
	work1::work11::doSomething();
	work2::a;
	work2::doSomething();

	cout << work1::work11::a << endl;
	cout << work2::a << endl;
}