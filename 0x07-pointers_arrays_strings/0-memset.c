#include "main.h"
#include <string.h>

/*
 * memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */
char *memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
