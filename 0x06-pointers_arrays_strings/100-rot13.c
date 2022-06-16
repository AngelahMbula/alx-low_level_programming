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

	for (i = 0; c[i] != '\0'; i++)
	{
		if (*(c + i) >= 'a' && *(c + i) < 'n')
			*(c + i) += 13;
		else (*(c + i) >= 'n' && *(c + i) <= 'z')
			*(c + i) -= 13;
	}
}
