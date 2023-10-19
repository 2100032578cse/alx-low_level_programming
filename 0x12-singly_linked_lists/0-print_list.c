#include "lists.h"

/**
 * print_list - funtion to print list elements
 * @h: pointer to the list to be printed
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)");
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
	return (0);
}
