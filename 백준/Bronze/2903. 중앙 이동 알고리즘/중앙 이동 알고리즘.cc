#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
        a = 2 * a - 1;

    cout << a * a << endl;
}
