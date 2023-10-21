#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const array<int, 5>& arr, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= arr.size() - 1);

	cout << arr[ix] << endl;
}

int main()
{
	array<int, 5> arr{ 1,2,3,4,5 };

	printValue(arr, 4);

	const int x = 10;

	assert(x == 5);

	static_assert(x == 5, "x should 5");
}