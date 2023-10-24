#include"lists.h"
/**
 *  listint_len - func to calculate nber of eles in list
 *  @h: head pointer
 *  Return: number of eles
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h =  h->next;
	}
	return (count);
}
