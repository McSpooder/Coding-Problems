#pragma once
//This is the class declaration for problem five of project euler.
//The smallest possible number that is evenly divisible by every number from 1 to 20

class Problem5
{
public:
	static void Run();
	static int Lcm(long long int a, long long int b); //least common multiple
	static int Gcd(int a, int b); //greatest common divisor
	Problem5();
	~Problem5();
};

