#include <stdio.h>
/**
 * main - entry point
 * Return: 0 value always
 */
int main(void)
{
	int f1 = 0, f2 = 1, next, i;

	for (i = 0; i < 50; i++)
	{
		next = f1 + f2;
		printf("%d,", next);

		f1 = f2;
		f2 = next;

		if (i == 0)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
