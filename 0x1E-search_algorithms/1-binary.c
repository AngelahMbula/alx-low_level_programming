#include "search_algos.h"
/**
 * binary_search - function that searches for value in a sorted arr integers
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, left, right;
