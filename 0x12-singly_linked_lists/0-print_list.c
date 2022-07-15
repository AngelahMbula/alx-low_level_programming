#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;


		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);

			i++;
			h = h->next;
		}
		return (i);
}
