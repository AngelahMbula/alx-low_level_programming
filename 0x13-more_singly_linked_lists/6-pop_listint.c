#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes thhe head node of listint_t list
 * @head: beginning of a list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int key;

	if (head == NULL)
		return (0);
	temp = *head;
	key = (*head)->n;
	(*head) = (*head)->next;

	free(temp);
	return (key);
}
