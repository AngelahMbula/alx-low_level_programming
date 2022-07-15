#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adds new node at the beginning
 * @head: first node
 * @str: string to add to the beginning node
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new_node;

	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
