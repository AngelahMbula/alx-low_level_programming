#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns sum of all data(n) in a listint_t list
 * @head: beginning of a list
 * Return: sum of all data in a listint_t list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
