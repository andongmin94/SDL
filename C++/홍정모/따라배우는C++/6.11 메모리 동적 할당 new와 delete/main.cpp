#include <iostream>

using namespace std;

int main()
{
	int* ptr = new (std::nothrow) int{ 1 };
	int* ptr2 = ptr;
	cout << ptr << endl;

	delete ptr;
	ptr = nullptr;
	ptr2 = nullptr;

	cout << "After delete" << endl;

	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
		cout << "Could not allocate memory" << endl;

	// memory leak
	while (true)
	{
		int* ptr = new int[1000];
		cout << ptr << endl;
		delete ptr;
	}
}