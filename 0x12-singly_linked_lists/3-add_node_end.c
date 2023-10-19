#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: This is the input linked list
 * @str: This is the string take in my linked list
 * Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn = (list_t *) malloc(sizeof(list_t));
	int count = 0;
	list_t *tail = *head;

	if (str == NULL)
		count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (nn == NULL || str == NULL)
	{
		free(nn);
		return (NULL);
	}
	nn->str = strdup(str);
	nn->len = count;
	nn->next = NULL;
	if (*head == NULL)
	{
		*head = nn;
		return (*head);
	}
	while (tail->next)
		tail = tail->next;
	tail->next = nn;
	return (*head);

}
