#include <stdio.h>
#include <stdint.h>

uint64_t sum_of_squares(uint16_t n)
{
	uint64_t accumulator = 0;
	for(uint16_t i = 1; i <= n; i++)
	{
		accumulator += i*i;
	}

	return accumulator;
}


int main() 
{
	printf("%d", sum_of_squares(4));

	return 0;
}
