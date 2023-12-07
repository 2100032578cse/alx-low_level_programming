#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head)
	{
		dlistint_t *temp = head;

		free(head);
		head = temp;
	}
}
