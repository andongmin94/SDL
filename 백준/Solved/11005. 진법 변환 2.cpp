#include <iostream>

using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;
    int arr[100] = {0,};
    
    /* 36진법 기준 N을 36으로 나눔.
    여기서 나머지가 36진법의 첫째자리 숫자임.
    다시 몫을 36으로 나누고 나머지가 둘째자리임.
    이렇게 몫이 0이되는 순간까지.
    그리고 나머지들이 문자가 되게 변환하자고. */
    
    int i = 0;
    while (N > 0)
    {
        arr[i] = N % B;
        if (arr[i] >= 10)
            arr[i] += 55;
        N /= B;
        i += 1;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (arr[j] >= 10)
            cout << (char)arr[j];
        else
            cout << arr[j];
    }
}