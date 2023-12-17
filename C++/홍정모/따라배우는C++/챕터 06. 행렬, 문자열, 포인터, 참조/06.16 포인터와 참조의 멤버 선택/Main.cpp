#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;
	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;
	ref.weight = 90;

	Person* ptr = &person;
	ptr->age = 30;
	ptr->weight = 180;
	(*ptr).age = 20;
	(*ptr).weight = 120;

	Person& ref2 = *ptr;
	ref2.age = 45;
	ref2.weight = 240;

	cout << &person << endl;
	cout << &ref2 << endl;
}