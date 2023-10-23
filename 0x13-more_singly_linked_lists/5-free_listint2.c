#include "lists.h"
/**
 * free_listint2 -  free the list
 * @head: head pointer
 * Return: none
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (h != NULL)
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}

}
