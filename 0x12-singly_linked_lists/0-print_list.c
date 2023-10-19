#include "lists.h"

/**
 * print_list - funtion to print list elements
 * @h: pointer to the list to be printed
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
		return (nodes);
}
