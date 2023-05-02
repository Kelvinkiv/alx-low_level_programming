#include "lists.h"

/**
 * print_listint - ...
 * @h: ...
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
	size_t city = 0;

	while (h)
	{
		printf("%d\n", h->n);
		city++;
		h = h->next;
	}

	return (city);
}

