#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	while (n < i)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		n++;
		i--;
	}
}
