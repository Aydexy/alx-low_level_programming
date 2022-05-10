#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: first input parameter
 * @size: second input parameter
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
