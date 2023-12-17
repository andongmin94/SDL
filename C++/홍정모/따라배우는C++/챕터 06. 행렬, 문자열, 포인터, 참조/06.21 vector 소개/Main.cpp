#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// array<int, 5> array;
	// 벡터는 동적 할당이라 사이즈를 안 써줌
	vector<int> array;

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3{ 1,2,3 };

	cout << array3.size() << endl;

	vector<int> arr = { 1,2,3,4,5 };
	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	arr.resize(10);
	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	cout << arr.size() << endl;

	int* my_arr = new int[5];
	delete my_arr;
}