#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int arr[])
{
	cout << &arr << endl;
	cout << &arr[1] << endl;
	cout << arr[2] << endl;
	cout << sizeof(arr) << endl;
}

int main()
{
	const int num_students = 5;

	int arr[num_students] = { 1,2,3 };

	cout << &arr << endl;
	cout << &arr[1] << endl;
	cout << arr[2] << endl;
	cout << sizeof(arr) << endl;
	doSomething(arr);
}