#include <iostream>

using namespace std;

enum student_scores
{
	JACKJACK,
	DASH,
	violet,
	NUM_STUDENTS,
};

int main()
{
	int student_scores[NUM_STUDENTS];

	student_scores[JACKJACK] = 0;
	student_scores[DASH] = 100;

	const int num_students = 5;

	int arr[num_students];
}