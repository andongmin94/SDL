#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int i;
    int T;
    int TC[10];
    int sum;

    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int sum = 0;

        for (i = 0; i < 10; i++)
        {
            cin >> TC[i];
            if (TC[i] % 2 == 1)
            {
                sum += TC[i];
            }
        }
        cout << "#" << test_case << " " << sum << endl;
    }

    return 0;
}