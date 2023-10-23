#include "lists.h"
/**
 * get_nodeint_at_index - get nth node
 * @head: head pointer
 * @index: index on which node to return
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cindex = 0;
	listint_t *temp;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (cindex < index)
	{
		cindex++;
		temp = temp->next;
	}
	return (temp);
}
