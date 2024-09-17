#include <stdio.h>
#include <stdint.h>
#include <math.h>


double soln1(uint16_t x, uint16_t n)
{
	uint16_t accumulated_denominator = 1; 
	double accumulator = x;
	
	for(uint16_t i = 2; i <= n; i++)
     	{
     		accumulated_denominator += i;
     		accumulator += (double)pow(x, i)/accumulated_denominator;
	}

	return accumulator;
}

int main()
{
	printf("%f", soln1(2, 3)); 

	return 0;
}
