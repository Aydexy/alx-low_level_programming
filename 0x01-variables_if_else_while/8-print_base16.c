#include <stdio.h>
/**
 * Description: main - To display Hexadecimal strings
 *
 * Return: 0 value on success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
