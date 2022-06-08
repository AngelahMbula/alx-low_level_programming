#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: number to be given a sign
 * Return: 1 if greater than 0, -1 if less than 0, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
