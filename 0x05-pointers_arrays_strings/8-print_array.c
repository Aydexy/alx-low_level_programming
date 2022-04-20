#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array int
 * @a: input array
 * @n: input n elements
 * Return: 0 value on success
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
