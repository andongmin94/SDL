﻿#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
	IntArray(int length)
		: m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const initializer_list<int>& list)
		: IntArray(list.size())
	{
		int count = 0;
		for (auto& element : list)
			m_data[count++] = element;

		//for (unsigned count = 0; count < list.size(); count++)
		//	m_data[count] = list[count];
		// // 이니셜라이저 리스트는 대괄호 접근을 지원하지 않음.
	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	friend ostream& operator << (ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length; i++)
			cout << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

	// TODO : overload operator =
};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5] {1, 2, 3, 4, 5};

	auto il = { 10,20,30 };

	IntArray int_array{ 1,2,3,4,5 };
	cout << int_array << endl;
}