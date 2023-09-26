#include "lists.h"
/**
 *free_listint2 - add nodes at the end of listed link
 *
 *@head:pointer to head of linked list
 *
 *Return:nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node_t;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		node_t = (*head)->next;
		free(*head);
		*head = node_t;
	}
	head = NULL;
}
