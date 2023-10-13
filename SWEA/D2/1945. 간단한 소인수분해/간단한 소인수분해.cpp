#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        while (N != 0)
        {
            if (N % 2 == 0)
            {
                N = N / 2;
                a += 1;
            }
            else if (N % 3 == 0)
            {
                N = N / 3;
                b += 1;
            }
            else if (N % 5 == 0)
            {
                N = N / 5;
                c += 1;
            }
            else if (N % 7 == 0)
            {
                N = N / 7;
                d += 1;
            }
            else if (N % 11 == 0)
            {
                N = N / 11;
                e += 1;
            }
            else
            {
                break;
            }
        }
        cout << "#" << i + 1 << " " << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
}