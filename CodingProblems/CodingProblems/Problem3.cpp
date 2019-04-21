#include "stdafx.h"
#include "Problem3.h"
#include <iostream>


void Problem3::Run()
{
	std::cout << "=======================================================================================================================" << std::endl;
	std::cout << "---------------------------------------------------- PROBLEM 3 --------------------------------------------------------" << std::endl;
	std::cout << "Find the largest prime factor of 600851475143." << std::endl;

	long long int number = 600851475143;
	int factor = 2;
	bool valid;

	while (number > 1) {

		if (number % factor == 0) {
			number /= factor;
		}
		else {
			factor++;
		}
	}


	std::cout << "Answer: " << factor << std::endl << std::endl;
}

Problem3::Problem3()
{
}


Problem3::~Problem3()
{
}

