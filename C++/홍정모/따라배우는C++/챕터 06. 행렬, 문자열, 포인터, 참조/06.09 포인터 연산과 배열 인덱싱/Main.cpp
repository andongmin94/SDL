#include <iostream>

using namespace std;

int main()
{
	int array[] = { 9,7,5,3,1 };
	int* ptr = array;


	for (int i = 0; i < 5; i++)
		cout << array[i] << " " << (uintptr_t) & array[i] << endl;

	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << *(ptr+i) << " " << (uintptr_t)(ptr + i) << endl;

	char name[] = "jack jack";
	const int n_name = sizeof(name) / sizeof(name[0]);
	char* ptr_c = name;
	for (int i = 0; i < n_name; i++)
		cout << *(ptr_c + i);
}