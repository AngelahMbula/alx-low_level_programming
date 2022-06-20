#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the lenth of a prefix substring
 * @s: string to be evaluated
 * @accept: contains bytes
 * Return: number of bytes in intial segment
 */

unsigned int_strspn(char *s, char *accept)
{
	int i;

	int count = 0;

	for (i = 0; i < strlen(accept); i++)
	{
		if (count == strlen(s))
			break;
		if (accept[i] == s[count])
			count++;
	}
	return (count);
}
