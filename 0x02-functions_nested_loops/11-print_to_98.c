#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number passed into function
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	for (; n < 98; n++)
	{
		_putchar('n');
		_putchar(',');
		_putchar(' ');
	}
	}
	else if (n > 98)
	{
	for (; n >98; n--)
	{
		_putchar('n');
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
}
