﻿#include <iostream>

using namespace std;

int main()
{
	// const int num_students = 5;
	int scores[] = { 84,92,76,81,56 };

	int max_score = 0;
	int total_score = 0;

	const int num_students = sizeof(scores) / sizeof(int);

	for (int i = 0; i < num_students; i++)
	{
		total_score += scores[i];
		max_score = (max_score < scores[i]) ? scores[i] : max_score;
	}
	double ave_score = static_cast<double>(total_score) / num_students;

	cout << max_score;

	//int score0 = 84;
	//int score1 = 92;
	//int score2 = 76;
	//int score3 = 81;
	//int score4 = 56;

	//int total_score = score0 + score1 + score2 + score3 + score4;

	//double ave_score = static_cast<double>(total_score) / num_students;
}