#include "lists.h"
/**
 * pop_listint - delete head element
 * @head: head pionter
 * Return: head values;
*/
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	if (head == NULL)
		return (0);
	temp = *head;
	val = temp->n;
	*head = temp->next;
	free(temp);
	return (val);


}
