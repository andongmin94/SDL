#include <iostream>

using namespace std;

int main()
{
    int A, B;
    A = -1;
    B = -1;
    while(A !=0 && B != 0)
    {
        cin >> A >> B;
        if (A == 0 && B == 0)
            break;
        if (A > B)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}