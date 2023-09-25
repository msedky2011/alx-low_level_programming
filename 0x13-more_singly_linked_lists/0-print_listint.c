#include "lists.h"
#include <stdio.h>
/**
 *print_listint - print all nodes of listed link
 *
 *@h:pointer to head of linked list
 *
 *Return:number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);

}
