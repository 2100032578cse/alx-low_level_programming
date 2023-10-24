#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: pointer to the head
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t siz = 0;
	int d;
	listint_t *temp;

	if (h != NULL || *h != NULL)
		return (0);
	while (*h != NULL)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			siz++;
		}
		else
		{
			free(*h);
			*h = NULL;
			siz++;
			break;
		}
	}
	*h = NULL;
	return (siz);
}
