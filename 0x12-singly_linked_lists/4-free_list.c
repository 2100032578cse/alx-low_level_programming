#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: This is the linked listi
 */

void free_list(list_t *head)
{

	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		free(curr->str);
		free(curr);
		head = head->next;
	}
}
