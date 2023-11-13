#include "lists.h"
/**
 * print_dlistint - prints the contents of a doubly linked list
 * @h: the head of the list
 * Return: the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h -> next;
		x++;
	}
	return(x);
}
