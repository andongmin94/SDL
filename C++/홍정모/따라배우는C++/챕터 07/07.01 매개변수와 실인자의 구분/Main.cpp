#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
} // x and y are destroyed here

int main()
{
	int x = 1, y = 2;
	foo(6, 7);
	foo(x, y + 1);
}