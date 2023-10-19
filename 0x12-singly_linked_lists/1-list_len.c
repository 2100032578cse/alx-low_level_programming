#include "lists.h"
/**
 * list_len - function to count alements in array list
 *@h: pointer to list
 *Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
