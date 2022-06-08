#include <stdio.h>
/**
 * main - entry point
 * Return: 0 value always
 */
int main(void)
{
	int f1 = 1, f2 = 2, next, i;

	for (i = 0; i < 50; i++)
	{
		if (i < 1)
			next = i;
		else
		{
			next = f1 + f2;
			f1 = f2;
			f2 = f1;
		}
		printf("%d, ", next);
	}
	printf("\n";
	return (0);
}
