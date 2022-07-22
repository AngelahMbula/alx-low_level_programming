#include "main.h"
/**
 * flip_bits - counts number of bits needed to flip to get from one number to
 * another
 * @n: the number
 * @m: number to flip to
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		bit +=(xor & 1);
		xor >>= 1;
	}
	return (bit);
}
