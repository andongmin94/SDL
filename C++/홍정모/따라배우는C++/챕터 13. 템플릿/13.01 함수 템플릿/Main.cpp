﻿#include "Cents.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1, 2) << endl;
	cout << getMax(3.14, 15.3) << endl;
	cout << getMax('a', 'c') << endl;

	cout << getMax(Cents(5), Cents(9)) << endl;
}