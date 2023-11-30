#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

template<typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;

	osstream << x;
	return osstream.str();
}

template<typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);

	return (isstream >> x) ? true : false;
}

int main()
{
	std::string my_str(ToString("Hello"));

	std::cout << my_str << std::endl;

	//float i = std::stof(my_str);
	//cout << i << endl;

	double d;

	if (FromString(my_str, d))
		cout << d << endl;
	else cout << "Cannot convert string to double" << endl;
}