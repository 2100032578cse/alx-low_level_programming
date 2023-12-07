#include <stddef.h>
#include "lists.h"

/**
 *  print_dlistint - print the elements of dlinked list
 *  @h: head pointer
 *  Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t ans = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		ans++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (ans);
}
