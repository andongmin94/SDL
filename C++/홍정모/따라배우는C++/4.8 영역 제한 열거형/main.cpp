#include <iostream>
#include <typeinfo>


int main()
{
	using namespace std;

	enum Color
	{
		RED,
		BLUE
	};

	enum Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	if (color == fruit)
		cout << "Color is fruit ? " << endl;
}