#include "stdafx.h"
#include "Problem2.h"
#include <iostream>


void Problem2::Run() {

	std::cout << "=======================================================================================================================" << std::endl;
	std::cout << "---------------------------------------------------- PROBLEM 2 --------------------------------------------------------" << std::endl;
	std::cout << "Find the sum of all the even fibonacci numbers that dont exceed 4 million" << std::endl;

	int sum = 0;
	int number1 = 1;
	int number2 = 1;
	int temp;

	while (number2 < 4000000) {

		if (number2 % 2 == 0) {
			sum += number2;
		}

		temp = number1 + number2;
		number1 = number2;
		number2 = temp;
	}

	std::cout << "Answer: " << sum << std::endl << std::endl;

}

Problem2::Problem2()
{
}


Problem2::~Problem2()
{
}
