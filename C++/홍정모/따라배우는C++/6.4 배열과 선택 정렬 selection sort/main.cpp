#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; index++)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	/*				value	index
	3 5 2 1 4		  1		   3
	1 5 2 3 4		  2		   2
	1 2 5 3 4		  3		   3
	1 2 3 5 4		  4		   4
	1 2 3 4 5		  		   
	*/

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };
	printArray(array, length);

	// swap
	int temp = array[0];
	array[0] = array[1];
	array[1] = temp;

	printArray(array, length);
}