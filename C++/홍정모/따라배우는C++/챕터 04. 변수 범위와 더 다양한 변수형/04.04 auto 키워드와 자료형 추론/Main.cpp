#include <iostream>

using namespace std;

auto add(int x, int y) -> int;
auto add(int x, int y) -> double;

int		add(int x, int y);
double	add(int x, int y);

auto add(int x, int y) -> int
{
	return x + y;
}

auto add(double x, double y)
{
	return x + y;
}

int main()
{
	auto a = 123;
	auto b = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);
}