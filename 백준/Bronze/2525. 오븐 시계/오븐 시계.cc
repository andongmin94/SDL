#include <iostream>

using namespace std;

int main()
{
    int hours, min, duck;
	int totalValue;

	cin >> hours >> min;
    cin >> duck;

	totalValue = hours * 60 + min + duck;
    
    if (totalValue >= 1440)
        totalValue = totalValue - 1440;
    
    hours = totalValue / 60;
	min = totalValue % 60;

	cout << hours << " " << min << endl;
    
    return 0;
}