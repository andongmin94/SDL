#include <iostream>

using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    N = K / M;
    M = K % M;
    cout << N << " " << M;
}