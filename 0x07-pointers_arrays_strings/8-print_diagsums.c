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
	int i, j, sum = 0;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum = sum + a[i][j];
		}
	}
	printf("%d\n", sum);
}
