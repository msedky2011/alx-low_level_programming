#include "lists.h"
/**
 *pop_listint - delete nodes of listed link
 *
 *@head:pointer to head of linked list
 *
 *Return:0 if linked list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);
	return (data);

}
