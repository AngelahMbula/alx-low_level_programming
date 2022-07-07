#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: sum of all its parameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int i, sum;

	va_start(num, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
