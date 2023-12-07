#include"lists.h"
/**
 * add_dnodeint - add node on begin
 * @head: head poiter of node
 * @n: value of node to add
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
	{
		return (nn);
	}
	nn->prev = NULL;
	nn->n = n;
	nn->next = *head;
	if (*head != NULL)
		(*head)->prev = nn;
	*head = nn;
	return (nn);
}
