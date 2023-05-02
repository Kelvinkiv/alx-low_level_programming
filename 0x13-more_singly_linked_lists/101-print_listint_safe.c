#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - ...
 * @head: ...
 * Return:Number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *xx, *yy;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	xx = head->next;
	yy = (head->next)->next;

	while (yy)
	{
		if (xx == yy)
		{
			xx = head;
			while (xx != yy)
			{
				nodes++;
				xx = xx->next;
				yy = yy->next;
			}

			xx = xx->next;
			while (xx != yy)
			{
				nodes++;
				xx = xx->next;
			}

			return (nodes);
		}

		xx = xx->next;
		yy = (yy->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - ...
 * @head: ...
 * Return: ...
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
