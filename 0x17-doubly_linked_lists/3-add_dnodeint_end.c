#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the head of a linked list
 * @n: data to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newlst, *temp;

	newlst = malloc(sizeof(dlistint_t));
	if (newlst == NULL)
		return (NULL);
	newlst->n = n;
	newlst->prev = NULL;
	newlst->next = NULL;

	if (*head == NULL)
	{
		*head = newlst;
		return (newlst);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newlst;
	newlst->prev = temp;
	return (newlst);
}
