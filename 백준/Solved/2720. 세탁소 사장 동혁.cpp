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
        int Q = 25, Q_cnt;
        int D = 10, D_cnt;
        int Ni = 5, Ni_cnt;
        int P = 1, P_cnt;

        Q_cnt = N / Q;
        N = N % Q;
        D_cnt = N / D;
        N = N % D;
        Ni_cnt = N / Ni;
        N = N % Ni;
        P_cnt = N / P;
        
        cout << Q_cnt << " " << D_cnt << " " << Ni_cnt << " " << P_cnt << endl;
    }
}