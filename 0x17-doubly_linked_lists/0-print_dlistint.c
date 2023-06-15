#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", cur->n);
		count++;
		cur = cur->next;
	}
	return (count);
}
