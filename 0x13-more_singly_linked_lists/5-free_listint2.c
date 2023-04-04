#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head) == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
