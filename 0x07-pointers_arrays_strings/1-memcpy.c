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

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
