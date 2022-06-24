#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with constant byte
 * @s:
 * @b:
 * @n:
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
