#include "main.h"
#include <string.h>
#include <stdio.h>

/*
 * _memcpy - copies memory area
 * @dest: memory copied to
 * @src: memory copied from
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	char *csrc = src;

	char *cdest = dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
	return (dest);
}
