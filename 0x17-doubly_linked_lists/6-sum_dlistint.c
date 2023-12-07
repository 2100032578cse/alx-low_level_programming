#include "lists.h"
/**
 * sum_dlistint - func to add list eles
 * @head: the head pointer
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum = sum + head->n;
	}
	sum = sum + head->n;
	return (sum);
}
