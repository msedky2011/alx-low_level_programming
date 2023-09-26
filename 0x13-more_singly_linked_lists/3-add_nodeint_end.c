#include "lists.h"
/**
 *add_nodeint_end - add nodes at the end of listed link
 *
 *@head:pointer to head of linked list
 *
 *@n: integer
 *Return:add. of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}


	return (*head);

}
