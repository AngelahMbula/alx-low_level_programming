#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int num, count, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (count = 0; count <= 9; count++)
		{
			_putchar(',');
			
			res = num * count;
			
			if (res <= 9)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
