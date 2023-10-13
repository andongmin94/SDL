#include <iostream>

using namespace std;

int main()
{
	int hours, min;
	int totalValue;

	cin >> hours >> min;

	totalValue = hours * 60 + min - 45;


	if (totalValue <= 0)
		totalValue = totalValue + 1440;

	hours = totalValue / 60;
	min = totalValue % 60;

	if (hours == 24)
		hours = 0;

	cout << hours << " " << min << endl;

	return 0;
}