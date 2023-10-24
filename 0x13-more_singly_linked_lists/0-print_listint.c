#include"lists.h"
/**
 * print_listint - prints all elements of list
 * @h: head pointer
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
