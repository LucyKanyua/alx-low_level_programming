#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		cur = cur->next;
		count++;
	}
	return (count);
}
