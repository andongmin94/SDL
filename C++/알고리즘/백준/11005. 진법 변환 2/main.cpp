#include <iostream>

using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;
    int arr[100] = { 0, };

    /* 36���� ���� N�� 36���� ����.
    ���⼭ �������� 36������ ù°�ڸ� ������.
    �ٽ� ���� 36���� ������ �������� ��°�ڸ���.
    �̷��� ���� 0�̵Ǵ� ��������.
    �׸��� ���������� ���ڰ� �ǰ� ��ȯ���ڰ�. */

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