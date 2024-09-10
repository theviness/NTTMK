#include <stdio.h>
#include <stdint.h>

uint64_t soln1(uint16_t n)
{
	uint64_t accumulator = 1;
	
	for(uint16_t i = 2; i <= n; i++)
	{
		accumulator *= i;
	}

	return accumulator;
}

int main()
{
	printf("%d", soln1(3));
	return 0;
}
