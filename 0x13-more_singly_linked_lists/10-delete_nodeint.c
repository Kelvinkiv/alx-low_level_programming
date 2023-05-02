#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: ...
 * @index: ...
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a = *head;
	listint_t *b = NULL;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}

	while (c < index - 1)
	{
		if (!a || !(a->next))
			return (-1);
		a = a->next;
		c++;
	}
	b = a->next;
	a->next = b->next;
	free(b);

	return (1);
}

