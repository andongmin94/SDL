#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 0;

	string m_value2 = "default";

	const string& getValue2() const
	{
		cout << "const version" << endl;
		return m_value2;
	}
	string& getValue2()
	{
		cout << "non-const version" << endl;
		return m_value2;
	}

	void setValue(int value) { m_value = value; }
	int  getValue() const { return m_value; }

	Something()
	{
		cout << "Constructor" << endl;
	}

	Something(const Something& st_in)
	{
		m_value = st_in.m_value;

		cout << "Copy constructor" << endl;
	}
};

void print(const Something& st)
{
	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	const Something something;
	// something.setValue(3);
	// cout << something.getValue() << endl;

	cout << &something << endl;

	print(something);

	const Something something2;
	something2.getValue2(); // = 10 X
	Something something3;
	something3.getValue2() = 10;
}