#include "lists.h"
/**
 *add_nodeint - add nodes of listed link
 *
 *@head:pointer to head of linked list
 *
 *@n: integer
 *Return:add. of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
