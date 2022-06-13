#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: value to be evaluated
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
