#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints all possible combinations, three digits
 *  Return: 0 value always
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k);
	if (i != j && j != k)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	return (0);
}
