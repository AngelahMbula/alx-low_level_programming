#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: beginning of list
 * @idx: index of list where new node should be added
 * @n: value of inserted code
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy;

	copy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		copy = copy->next;
		idx--;
		if (!copy)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
