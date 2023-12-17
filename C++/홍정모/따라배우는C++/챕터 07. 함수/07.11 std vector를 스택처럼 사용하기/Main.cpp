#include <iostream>
#include <vector>

using namespace std;

void printStack(const vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	// int *v_ptr = new int[3]{1,2,3};

	vector<int> stack;
	// 벡터는 size, capacity로 구성

	// stack.reserve(1024);
	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);
	// reserver로 미리 메모리를 잡아두면
	// new, delete 과정이 없어서 속도가 빠름
}