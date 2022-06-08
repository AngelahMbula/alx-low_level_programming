#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: number to be examined
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
	_putchar(-ld + '0');
	return (-ld);
	}
	else
	{
	_putchar(ld + '0');
	return (ld);
	}
}
