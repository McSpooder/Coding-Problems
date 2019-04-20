#include "stdafx.h"
#include "Problem1.h"
#include <iostream>

//This method sums up all the factors of 3 or 5 from 0 to 1000.
void Problem1::Run()
{
	std::cout << "=======================================================================================================================" << std::endl;
	std::cout << "---------------------------------------------------- PROBLEM 1 --------------------------------------------------------" << std::endl;
	std::cout << "Find the sum of all the factors of 3 or 5 from 0 to 1000." << std::endl;

	int sum = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	std::cout << "Answer: " << sum << std::endl << std::endl;
	std::getchar();
}

Problem1::Problem1()
{
}


Problem1::~Problem1()
{
}
