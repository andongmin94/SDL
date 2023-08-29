#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	//typedef double distance_t;
	//double my_distance;
	//distance_t home2work;
	//distance_t home2school;

	using namespace std;
	vector<pair<string, int>> pairlist1;
	vector<pair<string, int>> pairlist2;

	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist3;

	using pairlist_t = vector<pair<string, int>>;
}