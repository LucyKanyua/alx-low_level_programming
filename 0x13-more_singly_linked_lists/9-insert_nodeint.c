#include "lists.h"
/**
 * *insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in new node
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
