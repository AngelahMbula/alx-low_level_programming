#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i, len, temp;
	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;

		_putchar(s[i]);
	}
	_putchar('\n');
}
