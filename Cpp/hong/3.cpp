#include <iostream>
#include "MyConstants.h"
using namespace std;
/*
    int g_x; // external linkage
    static int g_x; // internal linkage
    const int g_x(0); // X

    extern int g_z; // external linkage
    extern const int g_z;
*/

int main()
{
    cout << "In test.cpp " << Constants::pi << endl;

    return 0;
}