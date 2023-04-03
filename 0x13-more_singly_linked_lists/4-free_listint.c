#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
