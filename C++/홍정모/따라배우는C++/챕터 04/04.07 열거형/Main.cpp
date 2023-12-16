#include <iostream>
#include <typeinfo>

enum Color // user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE
};

int computeDamanage(int weapon_id)
{
	if (weapon_id == 0) // sword
	{
		return 1;
	}

	if (weapon_id == 1) // hammer
	{
		return 2;
	}
}

int main()
{
	using namespace std;

	Color my_color = COLOR_RED;

	cout << my_color << " " << COLOR_RED << endl;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color appe{ COLOR_RED };

	int in_number;
	cin >> in_number;
	if (in_number == 0) my_color = COLOR_BLACK;
	// ...
}