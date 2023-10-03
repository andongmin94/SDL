#include <iostream>

using namespace std;

const char* getName()
{
	return "jack jack";
}

int main()
{
	//char name[] = "jack jack";
	const char* name = getName();
	const char* name2= getName();

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << name << endl;

	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* name3 = "jack jack";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name3 << endl;

	char c = 'Q';
	cout << c << endl;
}