#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int length = strlen (s[0]);

	int i, j;

	for (i = 0, j = length - 1; i < length; i++, j--)
	{
		s[1][i] = s[0][j];
	}
	_putchar(s[1]);
	_putchar('\n');
}
