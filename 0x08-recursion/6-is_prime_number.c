#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: given input
 * Return: 0 if number is divisible
 * 1 if number is not divisible
 */

int is_prime_number(int num, int n)
{
	int num;

	if (n == 1)
	{
		return (1);
	}
	else
	{
		if (num % n == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number(num, n - 1));
		}
	}
}
