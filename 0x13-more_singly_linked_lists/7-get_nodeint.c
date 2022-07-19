#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: beginning of a list
 * @index: index of the node starting at 0
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
