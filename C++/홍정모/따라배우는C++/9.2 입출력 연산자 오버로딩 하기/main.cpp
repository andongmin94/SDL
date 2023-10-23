#include <iostream>
<<<<<<< Updated upstream
#include <fstream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }
	
	void print()
	{
		cout << m_x << " " << m_y << " " << m_z;
	}

	friend ostream &operator << (ostream &out, const Point &point)
	{
		out << "( "<< point.m_x << " " << point.m_y << " " << point.m_z << " )";

		return out;
	}

	friend istream& operator >> (istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;

		//out << "( " << point.m_x << " " << point.m_y << " " << point.m_z << " )";

		return in;
	}
};

int main()
{
	ofstream of("out.txt");
	//Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
	Point p1, p2;

	cin >> p1 >> p2;

	//p1.print();
	//cout << " ";
	//p2.print();
	//cout << endl;

	cout << p1 << " " << p2 << endl;
	// of << p1 << " " << p2 << endl;

	of.close();
=======

using namespace std;

int main()
{

>>>>>>> Stashed changes
}