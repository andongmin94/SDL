#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	stringstream os;

	os << "Hello, World!" << endl;
	// << : insertion operation, >> : extraction operator

	//os.str("Hello, World!");
	os << "Hello, World!2" << endl;


	string str;
	str = os.str();
	cout << str << endl;

	cout << os.str() << endl;

	////

	stringstream os2;

	os2 << "12345 67.89";

	string str1;
	string str2;

	os2 >> str1 >> str2;

	cout << str1 << endl;
	cout << str2 << endl;

	////

	stringstream os3;

	int i = 12345;
	double d = 67.89;;

	string str3;
	string str4;

	os3 << i << " " << d;

	os3 >> str3 >> str4;

	cout << str3 << endl;
	cout << str4 << endl;

	////

	stringstream os4;

	int i2 = 12345;
	double d2 = 67.89;;

	os4 << i2 << " " << d2;

	//os4.str("12345 67.89");

	int i3;
	double d3;

	os4 >> i3 >> d3;

	cout << i3 << " " << d3 << endl;

	os4.str("");
	os4.str(string());
	os4.clear(); // state까지만 초기화함;

	cout << os4.str() << endl;
}