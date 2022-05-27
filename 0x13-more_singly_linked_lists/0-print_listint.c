include "lists.h"
/**
 * print_listint - prints all the elements in the listint_t list
 * @h: constant pointer type list_t
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
