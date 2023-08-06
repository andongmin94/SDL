#include <iostream>
#include <typeinfo>

using namespace std;

enum Color // user-defined data types
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
};

int computeDamage(int weapon_id)
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

    return 0;
}