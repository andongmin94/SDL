#include <iostream>

using namespace std;

//void func(int n)
//{	
//	// 2. ���� ���� (���� ����)
//	if (n == 9) 
//	{
//		// 3-3. �����鼭 ���
//		cout << n << " ";
//		return; // <- �̰� ������ ���ѷ���
//	}
//	
//	// 3-1. ���� �ڽ��� �����ϸ�鼭 ���
//	cout << n << " ";
//
//	// 1. ��� �⺻ ����
//	func(n + 1); // ���� �ڽ��� ������ 
//
//	// 3-2. ���� �ڽ��� ������ ���ƿ��鼭 ���
//	cout << n << " ";
//}

int N;
int DAT[10000]; // index : �ڽ� ��ȣ, value : �ش� �ڽ����� ���� ���� ���
void func2(int now)
{
	// 2. ���� ���� (���� ����)
	if (now == N)
	{
		for (int i = 0; i < N; i++)
			cout << DAT[i] << " ";
		cout << endl;
		// 0 ~ N - 1�� �ڽ����� ���ڵ��� �� �̾�����
		return;
	}

	// 1. ��� �⺻ ����
	for (int i = 1; i <= 6; i++)
	{
		// i : �ֻ����� ��
		DAT[now] = i; // now�� �ڽ����� i�� �̾Ҵ�.
		func2(now + 1);
	}
	cout << endl;
}

int main()
{
	cin >> N;

	// �ֻ��� �� 3���� �̴� ���
	//for (int i = 1; i <= 6; i++)
	//	for (int j = 1; j <= 6; j++)
	//		for (int k = 1; k <= 6; k++)
	//			cout << i << j << k << "\n";

	func2(0);

	return 0;
}

// data ���� : ����
// stack ���� : ��������, �Ű�����, ���ϰ�
// heap ���� : �����Ҵ�
// code ���� : �ڵ�