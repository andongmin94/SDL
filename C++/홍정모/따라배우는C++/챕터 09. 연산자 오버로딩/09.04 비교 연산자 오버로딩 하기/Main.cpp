#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Digit
{
private:
	int m_cents;

public:
	Digit(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend bool operator == (const Digit& c1, const Digit& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Digit& c1, const Digit& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend bool operator < (const Digit& c1, const Digit& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend ostream& operator << (ostream& out, const Digit& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	vector<Digit> arr(20);
	for (int i = 0; i < 20; i++)
		arr[i].getCents() = i;
	
	random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;
}