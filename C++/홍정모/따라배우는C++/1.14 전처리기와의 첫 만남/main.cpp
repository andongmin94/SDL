#include <iostream>
#include <algorithm>
using namespace std;

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE
// ��ó����� �ش� ���� �ȿ����� ȿ���� ����.
// �׷��� �Լ� �ٵ� �ٸ� cpp���Ͽ� �����ϰ�
// ��ó���⸦ ����ϸ� ������ �߻���.

int main()
{
	//cout << MAX(1 + 3, 2) << endl;
	//cout << max(1 + 3, 2) << endl;

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif
}