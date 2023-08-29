#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    while (cin >> A >> B)
    {
        A = A + 1;
        C = -1;
        C = B / A;
        cout << C << endl;
    }
}