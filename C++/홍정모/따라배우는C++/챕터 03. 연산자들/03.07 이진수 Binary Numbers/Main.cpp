﻿#include <iostream>

using namespace std;

int main()
{
	/*
	
	binary to decimal

	7654 3210
	0101 1110

	2^7 * 0 + 2^6 * 1 + 2^5 * 0 + 2^4 * 1 + 2^3 * 1 + 2^2 * 1 + 2^1 * 1 + 2^0 * 1
	= 128 * 0 + 64 * 1 + 32 * 0 + 16 * 1 + 8 * 1 + 4 * 1 + 2 * 1 + 1 * 0
	= 64 + 16 + 8 + 4 + 2
	= 94

	*/

	/*
	
	decimal to binary

	148

	148 / 2 = 74 r0 (r = remainder)
	74 / 2 = 37 r0
	37 / 2 = 18 r1
	18 / 2 = 9 r0
	9 / 2 = 4 r1
	4 / 2 = 2 r0
	2 / 2 = 1 r0
	1 / 2 = 0 r1
	
	1001 0100

	*/

	/*
	
	1 2 4 8 16 32 64 128 256 512 1024

	148

	148 >= 128 -> 128 = 2^7, 8번째 자리가 1
	148 - 128 = 20, 20 >= 64 -> 7번째 자리가 0
					20 >= 16 -> 5번째 자리가 1
	20 - 16 = 4,     4 >=  4 -> 3번째 자리가 1
	4 - 4   = 0, 2번째 1번째 0.

	1001 0100

	*/

	/*
	
	0110 (6 in decimal)
	0111 (7 in decimal)
	---------
	1101 = 13 in decimal


	*/

	/*
	
	-5

	0000 0101
	보수 complement
	1111 1010
	1111 1011 <- -5	
	
	*/

	/*
	
	1001 1110
	0110 0001
	0110 0010 -> 98 -> -98

	*/

	/*
	
	signed vs unsigned
	1001 1110 -> 2^7*1 + 2^4+1 + 2^3*1 + 2^2*1 + 2^1*1 = 128+16+8+4+2

	*/
}