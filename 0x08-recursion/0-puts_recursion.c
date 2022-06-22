#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
