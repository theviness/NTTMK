#include <stdio.h>
#include <stdint.h>
#include <math.h>

uint64_t power(uint16_t base, uint16_t exponent)
{
	return pow(base, exponent);
}


int main() 
{
	printf("%d", power(2,3));	
	return 0;
}
