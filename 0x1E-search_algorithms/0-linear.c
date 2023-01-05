#include "search_algos.h"
/**
 * linear_search - function that searches for a value in array of integers
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, value)
{
	unsigned int i;

	if (array == NULL)
		return(-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
