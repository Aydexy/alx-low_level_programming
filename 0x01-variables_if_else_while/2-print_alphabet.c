#include <stdio.h>
/**
 * Description: main - loop from a to z
 *
 * Return: 0 value return on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
