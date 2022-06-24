#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive integers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 if its an error, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, num = 0, sum = 0;

	if (argc != 2)
	{
		printf("0\n");
	}
	else if (argv[i][num] < '0' || argv[i][num] > '9')
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
