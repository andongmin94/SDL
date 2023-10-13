#include <iostream>
using namespace std;

int N, sum;

int main()
{
    cin >> N;
    for(int i = 0; i <= N; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}