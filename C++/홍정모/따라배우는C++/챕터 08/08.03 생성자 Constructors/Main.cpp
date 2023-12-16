#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int& num_in = 1, const int& den_in = 1)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	Fraction frac(3, 3); // frac

	First fir;
}