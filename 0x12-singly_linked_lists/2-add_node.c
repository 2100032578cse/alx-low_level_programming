#include "lists.h"

/**
 * add_node - func that add node on beginning
 * @head: head pointer
 * @str: string for node
 * Return: pointer to new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn = (list_t *) malloc(sizeof(list_t));
	int count = 0;

	if (str == NULL)
		count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len =  count;
	nn->next = (*head);
	(*head) = nn;
	return (*head);
}
