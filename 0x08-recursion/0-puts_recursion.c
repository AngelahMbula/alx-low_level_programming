#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	putchar('\n');
}