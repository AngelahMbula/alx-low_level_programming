#include "main.h"
#include <unistd.h>
#include "print-alphabet.h"

/**
 *main - check code
 *Return: 0 always
 */
int main(void)
{
	for (int n = 'a'; n <= 'z'; n++)
		print_alphabet( );
	return (0);
}
