#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a linked list
 * @head: head of the linked list
 * @index: the nth position
 * Return: nth node or NULL if operation fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
