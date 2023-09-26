#include "lists.h"
/**
 *insert_nodeint_at_index-returns the add.of added new node
 *@head:pointer to head of linked list
 *@idx:index of node
 *
 *@n:data of node
 *
 *Return:add. of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;

	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
