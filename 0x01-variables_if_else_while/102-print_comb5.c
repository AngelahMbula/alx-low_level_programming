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

	for (n = 0; n < 99; n++)
	for (i = n;;)
	{
	if ((i % 10) == 0)
	{
	putchar(n);
	putchar(',');
	putchar(' ');
	putchar('\n');
	}
	}
	return (0);
}
