#include <stdio.h>
#include <stdint.h>
#include <math.h>


uint64_t soln1(uint16_t x, uint16_t n)
{
	uint16_t accumulator = x;

	for(uint16_t i = 1; i <= n; i++)
	{
		accumulator += pow(x, 2*i + 1);
	}

	return accumulator;
}


int main()
{
	printf("%d", soln1(3, 3));	


	return 0;

}
