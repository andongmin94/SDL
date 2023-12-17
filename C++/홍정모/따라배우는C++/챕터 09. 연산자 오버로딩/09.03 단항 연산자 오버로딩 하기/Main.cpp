#include <iostream>

using namespace std;

class Digit
{
private:
	int m_cents;

public:
	Digit(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	Digit operator - () const
	{
		return Digit(-m_cents);
	}

	bool operator ! () const
	{
		// !Cents(...)
		return (m_cents == 0) ? true : false;
	}

	friend ostream& operator << (ostream& out, const Digit& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Digit cents1(6);
	Digit cents2(0);

	int a = 3;
	
	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Digit(10) << endl;

	auto temp = !cents1;

	cout << !cents1 << " " << !cents2 << endl;
}