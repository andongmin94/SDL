#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	cout << my_str[0] << endl;
	cout << my_str[3] << endl;

	my_str[3] = 'Z';

	cout << my_str << endl;

	try
	{
		//my_str[100] = 'X';
		my_str.at(100) = 'X';
	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	const char* arr = my_str.data();
	cout << (int)arr[6] << endl;
	cout << (int)arr[7] << endl;

	char buf[20]{ 0, };

	my_str.copy(buf, 5, 1);

	cout << buf << endl;
}