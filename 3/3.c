#include <stdio.h>
#include <stdint.h>

double soln1(uint16_t n)
{
	double accumulator = 0; 

	for(uint16_t i = 1; i <= n; i++)
	{
		accumulator += 1.0/i;
	}

	return accumulator;
}


int main()
{
	printf("%lf", soln1(4));

	return 0;
}

