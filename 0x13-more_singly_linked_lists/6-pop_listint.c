#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: ...
 * Return: the head node’s data (n) (Success), or 0 (if list is empty)
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (!head || !*head)
		return (0);

	b = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (b);
}
