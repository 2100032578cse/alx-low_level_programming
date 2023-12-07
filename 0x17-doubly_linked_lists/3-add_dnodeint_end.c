#include"lists.h"
/**
 * add_dnodeint_end -add node at end
 * @head: head pointer of list
 * @n:value of newnode toa dd
 * Return: newnode modified
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));
	dlistint_t *t = *head;

	if (nn == NULL)
		return (nn);
	nn->next = NULL;
	nn->n = n;
	if (*head == NULL)
	{
		nn->prev = NULL;
		*head = nn;
		return (nn);
	}
	while (t->next != NULL)
	{
		t = t->next;
	}
	nn->prev = t;
	t->next = nn;
	return (nn);
}
