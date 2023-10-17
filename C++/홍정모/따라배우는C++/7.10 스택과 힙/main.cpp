#include <iostream>

using namespace std;

int main()
{
	// stack은 로컬 변수나 함수들
	// heap은 동적 할당 포인터
	// 속도는 stack이 빠름
	// 함수에서 동적 할당을 하고 해제를 안하면 그 메모리가 힙에 물림
	// 별개로 로컬 포인터가 동적 할당을 해제해도
	// 널 포인터를 안넣으면 문제 발생의 여지가 존재함
}