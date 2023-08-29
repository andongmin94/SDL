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
        // char 문자열이기 때문에 끝에 NULL 공간을 잡아줘야 하는듯
        char P[8 * 20 + 1] = { 0, };
        int n = 0;
        for (int j = 0; j < S.length(); j++)
            for (int k = 0; k < N; k++)
            {
                // P 문자열 인덱스로 n을 잡고 상승시키는건
                // k를 넣으면 계속 P의 인덱스가 초기화되서임.
                P[n] = S[j];
                n++;
            }

        cout << P << endl;
    }
}
