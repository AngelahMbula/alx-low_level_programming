#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
