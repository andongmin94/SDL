#include <iostream>

using namespace std;

void print()
{
	cout << "Hello" << endl;
}

int addTwoNumber(int a, int b)
{
	print();
	return a + b;
}

int main()
{
	int sum = addTwoNumber(1, 2);

}