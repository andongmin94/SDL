#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student std("Jack Jack");
	std.setName("Jack Jack2");
	std.getName();

	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");

	cout << std.getName() << endl;
	cout << teacher1.getName() << endl;

	cout << endl;

	std.doNothing();
	teacher1.doNothing();

	cout << endl;

	std.study();
	teacher1.teach();

	Person person;
	person.setName("Mr. Incredible");
	person.getName();
	//person.study(); // error
	//person.teach(); // error
}