#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a linked list
 * @head: pointer to a linked list head
 * @n: data to add in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newlst;

	newlst = malloc(sizeof(dlistint_t));
	if (newlst == NULL)
		return (NULL);

	newlst->n = n;
	newlst->next = NULL;
	newlst->prev = NULL;

	if (*head == NULL)
	{
		*head = newlst;
		return (newlst);
	}

	newlst->next = *head;
	(*head)->prev = newlst;
	*head = newlst;
	return (newlst);
}
