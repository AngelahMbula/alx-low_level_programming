#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints combinations, two two digits
 *  Return: 0 value always
 */
int main(void)
{
	int n;
	int i;

	for (n = 0; n <= 98; n++)
	{
	for (i = n + 1; i <= 99; i++)
	{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar(' ');
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	if (n == 98 && i == 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
