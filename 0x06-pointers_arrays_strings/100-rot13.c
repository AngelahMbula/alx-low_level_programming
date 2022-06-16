#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - encodes a string
 * @c: string to be encoded
 * Return: resulting encoded string
 */

char *rot13(char *c)
{
	int i;

	int a = sizeof(c[0]);

	char out [a];

	for (i = 0; i <= a; i += 1)
	{
		if (c[i] >= 'a' && (c[i] + 13) <= 'z')
		{
			out[i] = c[i] + 13;
		}
	}
	return (out);
}
