#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
	if (onSale) return 10;
	else return 100;
}

int main()
{
	bool onSale = true;
	
	//const int price = (onSale == true) ? 10 : 100;
	const int price = getPrice(onSale);

	//if (onSale)
	//	price = 10;
	//else
	//	price = 100;

	cout << price << endl;

}