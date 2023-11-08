#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// try, catch, throw

	try
	{
		// something happend
		throw string("My error message");
	}
	catch (int x)
	{
		cout << "Catch integer " << x << endl;
	}
	catch (double x)
	{
		cout << "Double integer " << x << endl;
	}
	catch (const char* error_message)
	{
		cout << "Char * " << error_message << endl;
	}
	catch (std::string error_message)
	{
		// do something to respond
		cout << error_message << endl;
	}
}