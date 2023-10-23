#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: parameter
 * Return: 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
