#include <iostream>
#include <regex>

using namespace std;

int main()
{
	regex re("\\d");
	regex re("[[:digit:]]{3}");
	regex re("[A-Z]+");
	regex re("[A-Z]{3}");
	regex re("([0-9]{1})([-]?)([0-9]{1,4})");

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))
			cout << "Match" << endl;
		else
			cout << "No match" << endl;

		// print matches
	}
}