#include <stdio.h>
#include <stdint.h>

double soln1(uint16_t n)
{
	double accumulator = 1;
	uint64_t accumulated_denominator = 1;

	for(uint16_t i = 2; i <= n; i++)
     	{

		accumulated_denominator += i;
     		accumulator += 1.0/accumulated_denominator;
	}

	return accumulator;
}


int main()
{
	printf("%f", soln1(3));

	return 0;
}

