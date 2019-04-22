#include "stdafx.h"
#include "Problem5.h"
#include <iostream>


void Problem5::Run()
{
	std::cout << "=======================================================================================================================" << std::endl;
	std::cout << "---------------------------------------------------- PROBLEM 5 --------------------------------------------------------" << std::endl;
	std::cout << "Find the smallest number that is the multiple of 1 to 20" << std::endl;

	int num;
	int previousLcm = 1;
	for (int i = 2; i < 21; i++) {
		num = Lcm(previousLcm, i);
		previousLcm = num;
	}

	std::cout << "Result: " << num << std::endl << std::endl;
	
}

//least common multiple
int Problem5::Lcm(long long int a, long long int b)
{
	int result = (a*b) / Gcd(a,b);
	return result;
}

//greatest common divisor
int Problem5::Gcd(int a, int b)
{
	int temp;
	int remainder;

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

Problem5::Problem5()
{
}


Problem5::~Problem5()
{
}
