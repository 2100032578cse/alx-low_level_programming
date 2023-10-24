#include"lists.h"
/**
 * add_nodeint -  add node to beginn
 * @head: head pointer
 * @n: data to add
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	if (head ==  NULL)
		return (NULL);

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (newn);
	newn->next = *head;
	newn->n = n;
	*head = newn;
	return (*head);
}
