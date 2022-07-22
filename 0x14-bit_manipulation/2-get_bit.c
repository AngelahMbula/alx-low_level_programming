#include "main.h"
/**
 * get_bit - returns the value of an integer at a given index
 * @n: the integer
 * @index: the index
 * Return: value of the bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
