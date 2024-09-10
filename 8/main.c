#include <stdio.h>
#include <stdint.h>

double soln1(uint16_t n)
{
	double accumulator = 1.0/2;
	for(uint16_t i = 1; i <= n; i++)
	{
		accumulator += (double)(2*i + 1)/(2*i + 2);
	}

	return accumulator;
}


int main()
{
	printf("%f", soln1(2));
	return 0;
}
