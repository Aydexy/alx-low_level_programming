#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha = 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
