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
        // char ���ڿ��̱� ������ ���� NULL ������ ������ �ϴµ�
        char P[8 * 20 + 1] = { 0, };
        int n = 0;
        for (int j = 0; j < S.length(); j++)
            for (int k = 0; k < N; k++)
            {
                // P ���ڿ� �ε����� n�� ��� ��½�Ű�°�
                // k�� ������ ��� P�� �ε����� �ʱ�ȭ�Ǽ���.
                P[n] = S[j];
                n++;
            }

        cout << P << endl;
    }
}
