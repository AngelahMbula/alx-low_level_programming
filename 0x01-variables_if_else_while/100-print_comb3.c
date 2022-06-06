#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints possible different combinations, two digits
 *  Return: 0 value always
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	if (i < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
