#include "stdafx.h"
#include "Problem6.h"
#include <iostream>


void Problem6::Run()
{
	std::cout << "=======================================================================================================================" << std::endl;
	std::cout << "---------------------------------------------------- PROBLEM 6 --------------------------------------------------------" << std::endl;
	std::cout << "Finds the difference between numbers from 1 to 100 squared and the sum of numbers 1 to 100 squared." << std::endl;

	long long int number1 = 0;
	long int number2 = 0;

	for (int i = 1; i < 101; i++) {
		number1 += i * i;
		number2 += i;
	}

	number2 *= number2;
	number2 = number2 - number1;
	std::cout << "Result: " << number2;

}

Problem6::Problem6()
{
}


Problem6::~Problem6()
{
}
