#include <iostream>



namespace a
{
	int my_var(10);
	int my_a(123);
}

namespace b
{
	int my_var(20);
	int my_b(123);
}

int main()
{
	using namespace std;
	
	
	{
		using namespace a;
		cout << my_var << endl;
	}

	{
		using namespace b;
		cout << b::my_var << endl;
	}

	//cout << my_a << endl;
	//cout << my_b << endl;
}