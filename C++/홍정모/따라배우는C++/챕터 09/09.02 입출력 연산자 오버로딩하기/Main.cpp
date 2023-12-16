#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z) {}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	// 첫번째 인자가 클래스가 아니라 스트림임.
	// 그래서 멤버펑션으로 만들기 어려움.
	// friend로 정의해야하는 이유임.
	friend ostream& operator << (ostream& out, const Point& point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")" << endl;

		return out;
	}

	friend istream& operator >> (istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		//out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")" << endl;

		return in;
	}
};

int main()
{
	ofstream of("out.txt");

	Point p1(0.1, 0.2, 0.3), p2(3.3, 3.4, 3.5);
	cin >> p1 >> p2;

	// 오버로딩이 되어있었다면
	cout << p1 << p2 << endl;

	of << p1 << p2 << endl;

	of.close();
}