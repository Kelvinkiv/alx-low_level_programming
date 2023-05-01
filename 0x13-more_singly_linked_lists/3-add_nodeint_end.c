#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: ...
 * @n: ...
 * Return: pointer to the new node (Success), or NULL (Failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *a = *head;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);

	c->n = n;
	c->next = NULL;

	if (*head == NULL)
	{
		*head = c;
		return (c);
	}

	while (a->next)
		a = a->next;

	a->next = c;

	return (c);
}
