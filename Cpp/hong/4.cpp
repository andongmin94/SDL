#include <iostream>

// using namespace std;

namespace  a
{
    int my_var(10);
    int my_a(123);
}

namespace b
{
    int my_var(20);
    int my_b(456);
}

int main()
{
    using namespace std;
    using namespace a;
    using namespace b;

    {
        using namespace a;
        cout << my_a << endl;
    }
    {
        using namespace b;
        cout << my_b << endl;
    }

    return 0;
}