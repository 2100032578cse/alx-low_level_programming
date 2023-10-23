#include"lists.h"
/**
 * print_listint - prints all elements of list
 * @h: head pointer
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count_node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_node);
}
