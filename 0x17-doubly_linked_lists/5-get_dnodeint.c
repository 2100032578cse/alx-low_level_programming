#include "lists.h"
/**
 * get_dnodeint_at_index - checking index node
 * @head: the head pointer
 * @index: at which to get the value
 * Return: value
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (index == i)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
