#include "lists.h"

/**
 * dlistint_len - print no. of elements in a doubly linked list
 * @h: first node of list
 * Return: no. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while(h)
	{
		h = h->next;
		i++;
	}
	return(i);
}
