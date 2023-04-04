#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: first node i n the linked list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *temp = head;

	while (temp)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
