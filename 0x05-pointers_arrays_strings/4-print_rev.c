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
	int length;

	for (length = 0; s[length] != '\0'; length++)
		for (length = length - 1; length >= 0; length--)
		{
			_putchar(s[length]);
		}

		_putchar('\n');
}
