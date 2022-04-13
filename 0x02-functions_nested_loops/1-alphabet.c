#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Description: You are not allowed to include standard libraries.
 * Return: 0 value on success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
