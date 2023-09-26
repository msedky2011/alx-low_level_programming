#include "lists.h"
#include <stdio.h>
/**
 *free_listint - free linked list
 *
 *@head:pointer to head of linked list
 *
 *Return:nothing
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}


}
