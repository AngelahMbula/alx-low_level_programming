#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed 
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
