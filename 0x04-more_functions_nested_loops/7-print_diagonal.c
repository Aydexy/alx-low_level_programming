#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int type value
 * Return: void. no return.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)/* if 0 or negative just newline */
		_putchar('\n');
	for (i = 0; i < n; i++)/* we want the amount of rows equal to n */
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
