#include "lists.h"
/**
 * delete_dnodeint_at_index - insert at index
 * @head: head pointer
 * @index: at which index to delete
 * Return: the newwnode
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp1 = (*head)->next;
		temp1->prev = NULL;
		return (1);
	}
	temp1 = *head;
	while (temp1)
	{
		if (index == i)
		{
			temp2 = temp1->next;
			temp2->prev = temp1->prev->prev;
			temp1 = temp2->prev;
			temp1->next = temp2->next->next;
			return (1);
		}
		temp1 = temp1->next;
		i++;
	}
	if (index > i)
		return (-1);
	if (temp1->next == NULL)
		return (1);
	return (-1);
}
