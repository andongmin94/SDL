#include <iostream>
#include <array>
#include <tuple>

using namespace std;

tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;

	return make_tuple(a, d);
}

int main()
{
	tuple<int, double> my_tp = getTuple();
	cout << get<0>(my_tp) << endl;
	cout << get<1>(my_tp) << endl;

	// C++ 17
	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;
}