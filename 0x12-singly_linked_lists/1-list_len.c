#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns number of elements linked in a list_t list
 * @h: Input
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}

