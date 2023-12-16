#include<iostream>
#include "MyConstants.h"

using namespace std;

void doSomething()
{
	cout << "test.cpp : " << Constants::pi << " " << &Constants::pi << endl;
}