#include <iostream>
#include <typeinfo>

using namespace std;

enum Color // user-defined data types
{
    COLOR_BLACK = -3,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_SKYBLUE,
};

int computeDamage(int weapon_id)
{
    if (weapon_id == 0) // sword
        {
        return 1;
        }
}

int main()
{
    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{COLOR_RED};

    if (paint == -3)
    {
        cout << 1 << endl;
    }

    return 0;
}