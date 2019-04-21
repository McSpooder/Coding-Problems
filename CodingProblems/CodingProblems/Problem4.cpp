#include "stdafx.h"
#include "Problem4.h"
#include <iostream>
#include <sstream>
#include <string>


void Problem4::Run()
{
	std::cout << "=======================================================================================================================" << std::endl;
	std::cout << "---------------------------------------------------- PROBLEM 4 --------------------------------------------------------" << std::endl;
	std::cout << "Find the largest palindrome of two 3 digit numbers" << std::endl;

	bool flip = false;
	int number1 = 999;
	int number2 = 999;
	int product;
	int largestProduct = 0;
	std::string intstring;
	std::string reversedintstring;
	std::stringstream sstream;

	for (int i = 0; i < 100; i++) {
		for (int k = 0; k < 100; k++) {
			product = (number1 - i) * (number2 - k);
			//convert to string
			sstream.str("");
			sstream << product;
			intstring = sstream.str();

			//gets a reversed string
			sstream.str("");
			for (int j = intstring.length() - 1; j > -1; j--) {
				sstream << intstring[j];
			}
			reversedintstring = sstream.str();
			if (intstring == reversedintstring) {
				if (product > largestProduct) {
					std::cout << largestProduct;
					largestProduct = product;
				}
			}
		}
	}

	std::cout << "Answer: " << largestProduct << std::endl << std::endl;
}

Problem4::Problem4()
{
}


Problem4::~Problem4()
{
}
