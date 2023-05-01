#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: ...
 * @n: ...
 * Return: pointer to the new node (Success), or NULL (Failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);

	c->n = n;
	c->next = *head;
	*head = c;

	return (c);
}
