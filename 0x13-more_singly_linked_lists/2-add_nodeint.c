#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - adds new node at beginning of list
 * @head:  beginning of list
 * @n: int to add to list
 * Return: address of new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
