#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	array<int, 5> my_arr = { 1,22,3,40,5 };
	
	std::sort(my_arr.begin(), my_arr.end());
	for (auto element : my_arr)
		cout << element << " ";

	cout << endl;
	// 역순
	std::sort(my_arr.rbegin(), my_arr.rend());

	for (auto element : my_arr)
		cout << element << " ";
}