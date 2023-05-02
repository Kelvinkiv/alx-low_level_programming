#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: ...
 * Return: number of nodes (Success)
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
