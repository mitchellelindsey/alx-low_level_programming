#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: parameter 1
 * @index: parameter 2
 * Return: NULL, if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	for (p = 0; p < index; p++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
