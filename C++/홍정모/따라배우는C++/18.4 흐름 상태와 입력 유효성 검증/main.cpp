#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(const int& i)
{

}

void printStates(const std::ios& stream)
{
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;
	cout << "fail()=" << stream.fail() << endl;
	cout << "bad()=" << stream.bad() << endl;
}

bool isAllDigit(const string& str)
{

}

int main()
{
	while (true)
	{
		int i;
		cin >> i;

		printStates(cin);

		cout << boolalpha;
		cout << std::bitset<8>(cin.rdstate()) << endl;
		cout << std::bitset<8>(std::istream::goodbit) << endl;
		cout << std::bitset<8>(std::istream::failbit) << endl;
		cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;
	}
}