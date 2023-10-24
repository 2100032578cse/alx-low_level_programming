#include"lists.h"
/**
 *  print_listint - func to calculate nber of eles in list
 *  @h: head pointer
 *  Return: number of eles
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h =  h->next;
	}
	return (count);
}
