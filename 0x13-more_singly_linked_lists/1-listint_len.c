#include "lists.h"
/**
 * listint_len - returns number of elements in a list
 * @h: pointer to head of list
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
