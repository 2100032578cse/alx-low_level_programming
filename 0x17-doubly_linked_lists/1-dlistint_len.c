#include <stddef.h>
#include "lists.h"

/**
 *  dlistint_len - print the elements of dlinked list
 *  @h: head pointer
 *  Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t ans = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		ans++;
		h = h->next;
	}
	return (ans);
}
