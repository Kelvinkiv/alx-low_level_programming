#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: Input
 * Return: Freed list
 */
void free_list(list_t *head)
{
	list_t *c;

	while (head)
	{
		c = head->next;
		free(head->str);
		free(head);
		head = c;
	}
}
