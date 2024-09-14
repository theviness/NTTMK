#include <stdio.h>
#include <stdint.h>
#include <math.h>


uint64_t soln1(uint16_t x, uint16_t n)
{
	uint64_t accumulator = pow(x, 2);	
	     
	for(uint16_t i = 2; i <= n; i++)
	{
		accumulator += pow(x, 2*i);
	}

	return accumulator;
}



int main()
{
	printf("%d", soln1(3, 4));

	return 0;
}
