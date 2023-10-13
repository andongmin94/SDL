#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        long double D;
        long double A, B, F;
        cin >> D >> A >> B >> F;

        cout << "#" << i + 1 << " " << setprecision(20) << D / (A + B) * F << "\n";
    }

    return 0;
}