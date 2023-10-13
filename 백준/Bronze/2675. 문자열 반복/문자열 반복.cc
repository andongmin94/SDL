#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        string S;
        cin >> N >> S;
        char P[161] = {0,};
        int n = 0;
        for (int j = 0; j < S.length(); j++)
            for (int k = 0; k < N; k++)
            {
                P[n] = S[j];
                n++;
            }

        cout << P << endl;
    }
}
