#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: ...
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *a = head;

	while (a)
	{
		add += a->n;
		a = a->next;
	}

	return (add);
}
