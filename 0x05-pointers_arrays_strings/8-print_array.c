#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: first integer
 * @n: second integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("Element [%d] = %d\n", i, a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
}
