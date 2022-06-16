#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @n: string to be encoded
 *Return: resulting encoded string
 */

char *leet(char *n)
{
	int i = 0;

	int j;

	char s1[] = "aAeEoOtTlL";

	char s2[] = "4433007711";

	while (n[i])
	{
		for (j = 0; j <= 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
		i++;
	}
	retrun (n);
}
