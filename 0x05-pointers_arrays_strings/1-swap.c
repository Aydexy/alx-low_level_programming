#include "main.h"

/**
 * swap_int - swaps the values of variable a to b.
 *
 * @a: pointer
 * @b: pointer
 * Return - 0 value on success
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
