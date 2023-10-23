#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: parameter
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
