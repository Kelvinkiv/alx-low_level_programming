#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: ...
 * Return: 0 (Success)
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
