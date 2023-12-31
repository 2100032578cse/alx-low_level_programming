#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index of the lis
 * Return: retrun 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;
	if (index != 0)
	{
		i = 0;
		while (i < index - 1 && prev != NULL)
		{
			prev = prev->next;
			i++;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}
	next = prev->next;
	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	return (1);
}
