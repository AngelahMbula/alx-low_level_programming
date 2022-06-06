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
	for (j = 0; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	if (i != j)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
