#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object
// Friend : name, address, age, height, weight, ...
//			print()

class Friend
{
public: // access specifier (public, private, protected)
	string name = "abc";
	string address = "def";
	int	age = 1;
	double height = 2;
	double weight = 3;

	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

int main()
{
	Friend jj{ "Jack", "seoul", 4, 5, 6 };

	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(5);

	my_friends[0].print();
	my_friends[1].print();

	for (auto& ele : my_friends)
		ele.print();
}