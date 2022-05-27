#include "lists.h"
/**
 * listint_len - prints the number of elements in listint_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_len;

	num_len = 0;
	while (h != NULL)
	{
		num_len++;
		h = h->next;
	}
	return (num_len);
}
