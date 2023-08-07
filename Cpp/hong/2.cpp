#include <iostream>

namespace work1
{
    int a = 1;
    void doSomething()
    {
        using namespace std;
        cout << "work1" << endl;
    }
}

namespace work2
{
    int a = 3;
    void doSomething()
    {
        using namespace std;
        cout << "work2" << endl;
    }
}


int main()
{
    using namespace std;


    cout << work1::a << endl;
    cout << work2::a << endl;

    int apple = 5;

    {
        int apple = 1;
        cout << apple << endl;
    }
    cout << apple << endl;

    return 0;
}