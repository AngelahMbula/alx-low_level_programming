#include <stdio.h>

/**
 * main - takes no arguments
 * Return: 0 value always
 */
int main(void)
{
	char (C);
	int (I);
	long int(L);
	long long int (LL);
	float (F);

	printf("Size of char: %c\n", sizeof(C));
	printf("Size of int: %i\n", sizeof(I));
	printf("Size of long int: %li\n", sizeof(L));
	printf("Size of long long int: %lli\n", sizeof(LL));
	printf("Size of float: %f\n", sizeof(F));

	return (0);
}
