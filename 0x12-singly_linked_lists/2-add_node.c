#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - adds new node at beginning of a list
 * @head: beginning of node
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	dup = strdup(str);

	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
