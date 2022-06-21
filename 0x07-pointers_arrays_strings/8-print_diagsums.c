#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: square matrix of integers
 * @size: size of matrix
 * Return: the sum
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
