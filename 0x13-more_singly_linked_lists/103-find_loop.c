#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	while (f != NULL & f->next != NULL)
	{
		s = s->next;
		f = f->next->next;
		if (s ==  f)
		{
			s == head;
			while (f != s)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
