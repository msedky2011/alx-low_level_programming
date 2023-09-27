#include "lists.h"
#include <stdio.h>
/**
 *print_listint_safe - print all nodes of listed link
 *
 *@head:pointer to head of linked list
 *
 *Return:number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	while (head != NULL || head->next != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (nodes);

}
