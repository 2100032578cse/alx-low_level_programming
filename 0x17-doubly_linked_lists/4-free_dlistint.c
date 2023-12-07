#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = h->next;
		free(temp)
	}
}
