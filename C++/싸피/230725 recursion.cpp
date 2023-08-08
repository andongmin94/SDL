#include <iostream>

using namespace std;

//void func(int n)
//{	
//	// 2. 끝낼 조건 (기저 조건)
//	if (n == 9) 
//	{
//		// 3-3. 끝나면서 출력
//		cout << n << " ";
//		return; // <- 이게 없으면 무한루프
//	}
//	
//	// 3-1. 다음 박스로 진행하면면서 출력
//	cout << n << " ";
//
//	// 1. 재귀 기본 구조
//	func(n + 1); // 다음 박스를 만들어라 
//
//	// 3-2. 다음 박스가 끝나고 돌아오면서 출력
//	cout << n << " ";
//}
asd
int N;
int DAT[10000]; // index : 박스 번호, value : 해당 박스에서 뽑은 눈을 기록
void func2(int now)
{
    // 2. 끝낼 조건 (기저 조건)
    if (now == N)
    {
        for (int i = 0; i < N; i++)
            cout << DAT[i] << " ";
        cout << endl;
        // 0 ~ N - 1번 박스에서 숫자들을 다 뽑았으면
        return;
    }

    // 1. 재귀 기본 구조
    for (int i = 1; i <= 6; i++)
    {
        // i : 주사위의 눈
        DAT[now] = i; // now번 박스에서 i를 뽑았다.
        func2(now + 1);
    }
    cout << endl;
}

int main()
{
    cin >> N;

    // 주사위 눈 3개를 뽑는 방법
    //for (int i = 1; i <= 6; i++)
    //	for (int j = 1; j <= 6; j++)
    //		for (int k = 1; k <= 6; k++)
    //			cout << i << j << k << "\n";

    func2(0);

    return 0;
}

// data 영역 : 전역
// stack 영역 : 지역변수, 매개변수, 리턴값
// heap 영역 : 동적할당
// code 영역 : 코드