#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint list,
 * and returns the head node’s data (n).
 * @head: pointer to the pointer to the first element in the linked list
 * Return: the data inside the ements that was deleted
 * 0 if the list was empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);
	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
