#include "lists.h"
/**
 * find_listint_loop - locates the loop in a linked list
 * @head: ...
 * Return: address of the node where the loop starts
 * NULL (if there is no loop)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x1 = head;
	listint_t *x2 = head;

	if (!head)
		return (NULL);

	while (x1 && x2 && x2->next)
	{
		x2 = x2->next->next;
		x1 = x1->next;
		if (x2 == x1)
		{
			x1 = head;
			while (x1 != x2)
			{
				x1 = x1->next;
				x2 = x2->next;
			}
			return (x2);
		}
	}

	return (NULL);
}
