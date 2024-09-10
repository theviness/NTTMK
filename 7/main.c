#include <stdio.h>
#include <stdint.h>

double soln1(uint16_t n)
{
	double accumulator = 0;

	for(uint16_t i = 0; i <= n; i++)
	{
		accumulator += (double)i/(i+1);
	}

	return accumulator;
}


int main()
{
	printf("%f", soln1(2));

	return 0;
}
