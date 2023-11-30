#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1("one");
	string str2("two");

	cout << str1 << " " << str2 << endl;
	
	std::swap(str1, str2);

	cout << str1 << " " << str2 << endl;

	str1.swap(str2);

	cout << str1 << " " << str2 << endl;

	str1.append("three");
	cout << str1 << endl;
	str1 += "three";
	cout << str1 << endl;
	str1 += str2 + "four";
	cout << str1 << endl;
	str1.push_back('A');
	cout << str1 << endl;

	string str("aaaa");
	str.insert(2, "bbb");
	cout << str << endl;
}