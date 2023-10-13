#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;
    int* B = new int[A];
    for (int i = 0; i < A; i++)
    {
        cin >> B[i];
    }
    int C;
    cin >> C;
    int D = 0;
    for (int i = 0; i < A; i++)
    {
        if (B[i] == C)
        {
            D += 1;
        }
    }
    cout << D << endl;
}