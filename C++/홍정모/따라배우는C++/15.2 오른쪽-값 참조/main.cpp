#include <iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value references

	int& lr1 = x; // Modifiable l-values
	//int &lr2 = cx; // Non-modifiable l-values
	//int &lr3 = 5; // R-values

	const int& lr4 = x; // Modifiable l-values
	const int& lr5 = cx; // Non-modifiable l-values
	const int& lr6 = 5; // R-values


	// R-value references

	//int &&rr1 = x; // Modifiable l-values
	//int &&rr2 = cx; // Non-modifiable l-values
	int&& rr3 = 5; // R-values

	//const int &&rr4 = x; // Modifiable l-values
}