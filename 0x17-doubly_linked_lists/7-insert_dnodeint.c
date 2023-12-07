#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: head pointer
 * @idx: at which index to insert
 * @n: value of index to insert
 * Return: the newwnode
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t nn = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (nn == NULL)
		return (nn);
	nn->n = n;
	if (!(*h))
	{
		nn->prev = NULL;
		nn->next = NULL;
		*head = nn;
		return (nn);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (temp);
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		temp->next = nn;
		nn->prev = temp;
		nn->next = NULL;
		return (nn);
	}
	nn->next = temp->next;
	temp->next = nn;
	nn->prev = temp;
	nn->next->prev = nn;
	return (nn);
}
