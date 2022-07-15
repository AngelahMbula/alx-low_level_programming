#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - returns the elements of a linked list
 * @h: pointer to node
 * Return: elements of a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
