#include "lists.h"

/**
 * reverse_listint - func to reverses a linked list.
 * @head: head pointer of list.
 * Return: pointer to the head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}

	*head = prev;
	return (*head);
}
