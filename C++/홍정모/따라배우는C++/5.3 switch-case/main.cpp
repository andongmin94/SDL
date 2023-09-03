#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "BLACK";
		break;
	case 1:
		cout << "WHITE";
	}
}

int main()
{
	int x;
	cin >> x;
	{
		int y = 0;
		switch (x)
		{
			case 0:
			{
				int y = 5;
				y = y + x;
				cout << y << endl;
				break;
			}
			case 1:
			{
				int y = 5;
				y = y - x;
				cout << y << endl;
				break;
			}
			default:
				cout << "Undefined input " << x << endl;
		}
	}
}