#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - takes no arguments, entry point
 * Return: 0 value always
*/

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* if loop function */

	if ( n > 0 )
	{
		printf("is positive\n");
	}
	else if ( n == 0 )
	{
		printf("is zero\n");
	}
	else 
	{
		printf("is negative\n");

	return (0);

}
