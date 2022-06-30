#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: number of bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	unsigned int i;

	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	n = memory;
	for (i = 0; i < (nmemb * size); i++)
		n[i] = '\0';
	return (memory);
}
